#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O3,unroll-loops")

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define all(x) (x).begin(), (x).end()

const int MAXN = 1000005;

int X[MAXN];
int Y[MAXN];

int32_t main() {
    fastio;

    int n, k;
    if (!(cin >> n >> k)) return 0;

    int ax, bx, cx, mx;
    cin >> ax >> bx >> cx >> mx;

    int ay, by, cy, my;
    cin >> ay >> by >> cy >> my;

    X[0] = ax;
    for (int i = 1; i < n; ++i) {
        X[i] = (bx + (__int128)cx * X[i - 1]) % mx;
    }

    Y[0] = ay;
    for (int i = 1; i < n; ++i) {
        Y[i] = (by + (__int128)cy * Y[i - 1]) % my;
    }

    sort(X, X + n);
    sort(Y, Y + n);

    auto count_le = [&](int mid) -> int {
        int cnt = 0;
        int j = n - 1;
        for (int i = 0; i < n; ++i) {
            while (j >= 0 && X[i] + Y[j] > mid) {
                j--;
            }
            if (j < 0) break;
            cnt += (j + 1);
        }
        return cnt;
    };

    int low = X[0] + Y[0];
    int high = X[n - 1] + Y[n - 1];
    int ans = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (count_le(mid) >= k) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << "\n";

    return 0;
}
#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

const int MAX_X = 62505;
const int MAXN = 255;

bitset<MAX_X> can[MAXN];

int main() {
    fastio;
    int n, x;
    if (!(cin >> n >> x)) return 0;

    vector<int> a(n);
    rep(i, 0, n) {
        cin >> a[i];
    }

    if (x < 1 || x >= MAX_X) {
        cout << "N\n";
        return 0;
    }

    can[n][0] = 1;
    for (int i = n - 1; i >= 0; --i) {
        can[i] = can[i + 1] | (can[i + 1] << a[i]);
    }

    if (!can[0][x]) {
        cout << "N\n";
        return 0;
    }

    cout << "S\n";
    vector<int> ans;
    int cur_idx = 0;
    int rem = x;

    while (rem > 0) {
        for (int i = n - 1; i >= cur_idx; --i) {
            if (a[i] <= rem && can[i + 1][rem - a[i]]) {
                ans.pb(i);
                rem -= a[i];
                cur_idx = i + 1;
                break;
            }
        }
    }

    rep(i, 0, sz(ans)) {
        cout << ans[i] << (i + 1 == sz(ans) ? "" : " ");
    }
    cout << "\n";

    return 0;
}
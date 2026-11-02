#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

typedef vector<int> vi;

int32_t main() {
    fastio;

    int n, s;
    if (!(cin >> n >> s)) return 0;

    vi a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(all(a));
    a.erase(unique(all(a)), a.end());

    int total_cost = s;
    for (size_t i = 1; i < a.size(); ++i) {
        total_cost += min(s, a[i] - a[i - 1]);
    }

    cout << total_cost << "\n";

    return 0;
}
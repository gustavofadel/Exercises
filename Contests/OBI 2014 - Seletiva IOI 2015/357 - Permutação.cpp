#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

typedef vector<int> vi;

const int INF = 1e18;

int32_t main() {
    fastio;

    int n;
    if (!(cin >> n)) return 0;

    vi a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    vi b(n - 1);
    for (int i = 0; i < n - 1; ++i) cin >> b[i];

    if (n == 1) {
        cout << a[0] << "\n";
        return 0;
    }

    vector<bool> pref_ok(n + 1, false);
    vi pref_max_unchanged(n + 1, 0);
    vi pref_min_changed(n + 1, INF);

    pref_ok[0] = true;
    for (int j = 0; j < n - 1; ++j) {
        int k = j + 1;
        if (!pref_ok[k - 1]) {
            pref_ok[k] = false;
            continue;
        }

        if (b[j] == a[j]) {
            pref_ok[k] = true;
            pref_max_unchanged[k] = max(pref_max_unchanged[k - 1], a[j]);
            pref_min_changed[k] = pref_min_changed[k - 1];
        } else if (b[j] == a[j] - 1) {
            pref_ok[k] = true;
            pref_max_unchanged[k] = pref_max_unchanged[k - 1];
            pref_min_changed[k] = min(pref_min_changed[k - 1], a[j]);
        } else {
            pref_ok[k] = false;
        }
    }

    vector<bool> suff_ok(n + 1, false);
    vi suff_max_unchanged(n + 1, 0);
    vi suff_min_changed(n + 1, INF);

    suff_ok[n - 1] = true;
    for (int i = n - 2; i >= 0; --i) {
        int k = i;
        if (!suff_ok[k + 1]) {
            suff_ok[k] = false;
            continue;
        }

        if (b[i] == a[i + 1]) {
            suff_ok[k] = true;
            suff_max_unchanged[k] = max(suff_max_unchanged[k + 1], a[i + 1]);
            suff_min_changed[k] = suff_min_changed[k + 1];
        } else if (b[i] == a[i + 1] - 1) {
            suff_ok[k] = true;
            suff_max_unchanged[k] = suff_max_unchanged[k + 1];
            suff_min_changed[k] = min(suff_min_changed[k + 1], a[i + 1]);
        } else {
            suff_ok[k] = false;
        }
    }

    vi ans;
    for (int k = 0; k < n; ++k) {
        if (!pref_ok[k] || !suff_ok[k]) continue;

        int mx_unc = max(pref_max_unchanged[k], suff_max_unchanged[k]);
        int mn_chg = min(pref_min_changed[k], suff_min_changed[k]);

        if (a[k] > mx_unc && a[k] < mn_chg) {
            ans.pb(a[k]);
        }
    }

    sort(all(ans));

    for (size_t i = 0; i < ans.size(); ++i) {
        cout << ans[i] << (i + 1 == ans.size() ? "" : " ");
    }
    cout << "\n";

    return 0;
}
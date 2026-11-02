#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

const int MAX_STATES = 1 << 20;
int dist_val[MAX_STATES];

int main() {
    fastio;
    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<int> c(n);
    rep(i, 0, n) {
        int cnt;
        cin >> cnt;
        int mask = 0;
        rep(j, 0, cnt) {
            int topic;
            cin >> topic;
            --topic;
            mask |= (1 << topic);
        }
        int comp = ((1 << k) - 1) ^ mask;
        c[i] = (mask << k) | comp;
    }

    sort(all(c));
    c.erase(unique(all(c)), c.end());

    int target = (1 << (2 * k)) - 1;
    fill(dist_val, dist_val + (1 << (2 * k)), -1);

    vector<int> q;
    dist_val[0] = 0;
    q.pb(0);

    int ans = -1;
    for (int d = 1; !q.empty(); ++d) {
        vector<int> next_q;
        for (int x : c) {
            for (int u : q) {
                int v = u | x;
                if (dist_val[v] == -1) {
                    dist_val[v] = d;
                    if (v == target) {
                        ans = d;
                        goto finish;
                    }
                    next_q.pb(v);
                }
            }
        }
        q = move(next_q);
    }

finish:
    cout << ans << "\n";
    return 0;
}
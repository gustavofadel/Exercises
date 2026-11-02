#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

const int MAXN = 1005;
const int dr[] = {-1, 1, 0, 0};
const int dc[] = {0, 0, -1, 1};

int H[MAXN][MAXN];
int vis[MAXN][MAXN];
int pref[MAXN][MAXN];
int qx[MAXN * MAXN];
int qy[MAXN * MAXN];

struct Query {
    short r1, c1, r2, c2;
};

int main() {
    fastio;
    int n, m, k;
    if (!(cin >> n >> m >> k)) return 0;

    rep(i, 0, n + 2) {
        H[i][0] = -1;
        H[i][m + 1] = -1;
    }
    rep(j, 0, m + 2) {
        H[0][j] = -1;
        H[n + 1][j] = -1;
    }

    rep(i, 1, n + 1) {
        rep(j, 1, m + 1) {
            cin >> H[i][j];
        }
    }

    vector<pair<int, int>> collectors(k);
    rep(i, 0, k) {
        cin >> collectors[i].first >> collectors[i].second;
    }

    int q_cnt;
    cin >> q_cnt;
    vector<Query> qry(q_cnt);
    rep(i, 0, q_cnt) {
        int p, t, r, s;
        cin >> p >> t >> r >> s;
        qry[i] = {(short)(p - 1), (short)(t - 1), (short)r, (short)s};
    }

    vector<short> ans(q_cnt, 0);
    int timer = 0;

    rep(c, 0, k) {
        timer++;
        int head = 0, tail = 0;
        int sr = collectors[c].first;
        int sc = collectors[c].second;

        vis[sr][sc] = timer;
        qx[tail] = sr;
        qy[tail] = sc;
        tail++;

        while (head < tail) {
            int r = qx[head];
            int col = qy[head];
            head++;
            int h_cur = H[r][col];

            rep(d, 0, 4) {
                int nr = r + dr[d];
                int nc = col + dc[d];
                if (vis[nr][nc] != timer && H[nr][nc] >= h_cur) {
                    vis[nr][nc] = timer;
                    qx[tail] = nr;
                    qy[tail] = nc;
                    tail++;
                }
            }
        }

        if (tail == n * m) {
            rep(q, 0, q_cnt) {
                ans[q]++;
            }
            continue;
        }

        rep(i, 1, n + 1) {
            rep(j, 1, m + 1) {
                int val = (vis[i][j] == timer);
                pref[i][j] = val + pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1];
            }
        }

        rep(q, 0, q_cnt) {
            int sum = pref[qry[q].r2][qry[q].c2]
                    - pref[qry[q].r1][qry[q].c2]
                    - pref[qry[q].r2][qry[q].c1]
                    + pref[qry[q].r1][qry[q].c1];
            ans[q] += (sum > 0);
        }
    }

    rep(q, 0, q_cnt) {
        cout << ans[q] << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

typedef pair<int, int> pii;
typedef vector<int> vi;

const int MAXN = 305;
const int dr[] = {-1, 1, 0, 0};
const int dc[] = {0, 0, -1, 1};

int n;
int grid[MAXN][MAXN];
int vis[MAXN][MAXN];
int dist_grid[MAXN][MAXN];
int run_id = 0;

bool can_reach(int max_val) {
    if (grid[0][0] > max_val || grid[n - 1][n - 1] > max_val) return false;

    run_id++;
    queue<pii> q;
    q.push({0, 0});
    vis[0][0] = run_id;

    while (!q.empty()) {
        int r = q.front().fi;
        int c = q.front().se;
        q.pop();

        if (r == n - 1 && c == n - 1) return true;

        for (int i = 0; i < 4; ++i) {
            int nr = r + dr[i];
            int nc = c + dc[i];

            if (nr >= 0 && nr < n && nc >= 0 && nc < n) {
                if (vis[nr][nc] != run_id && grid[nr][nc] <= max_val) {
                    vis[nr][nc] = run_id;
                    q.push({nr, nc});
                }
            }
        }
    }

    return false;
}

int get_shortest_path(int max_val) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            dist_grid[i][j] = -1;
        }
    }

    queue<pii> q;
    q.push({0, 0});
    dist_grid[0][0] = 1;

    while (!q.empty()) {
        int r = q.front().fi;
        int c = q.front().se;
        q.pop();

        if (r == n - 1 && c == n - 1) return dist_grid[r][c];

        for (int i = 0; i < 4; ++i) {
            int nr = r + dr[i];
            int nc = c + dc[i];

            if (nr >= 0 && nr < n && nc >= 0 && nc < n) {
                if (dist_grid[nr][nc] == -1 && grid[nr][nc] <= max_val) {
                    dist_grid[nr][nc] = dist_grid[r][c] + 1;
                    q.push({nr, nc});
                }
            }
        }
    }

    return dist_grid[n - 1][n - 1];
}

int32_t main() {
    fastio;

    if (!(cin >> n)) return 0;

    vi vals;
    vals.reserve(n * n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
            vals.pb(grid[i][j]);
        }
    }

    sort(all(vals));
    vals.erase(unique(all(vals)), vals.end());

    int low = 0, high = (int)vals.size() - 1;
    int best_max = vals.back();

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (can_reach(vals[mid])) {
            best_max = vals[mid];
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    int best_len = get_shortest_path(best_max);

    cout << best_max << " " << best_len << "\n";

    return 0;
}
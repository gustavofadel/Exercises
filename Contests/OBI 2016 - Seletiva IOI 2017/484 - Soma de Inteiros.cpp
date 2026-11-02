#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define pb push_back
#define fi first
#define se second

typedef pair<int, int> pii;
typedef vector<int> vi;

const int MAXM = 1500005;

struct Node {
    int val;
    int left, right;
    bool deleted;
};

Node nodes[MAXM];
int node_cnt = 0;

int32_t main() {
    fastio;

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vi a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vi blocks;
    for (int i = 0; i < n; ) {
        int j = i;
        int sum = 0;
        if (a[i] > 0) {
            while (j < n && a[j] > 0) {
                sum += a[j];
                j++;
            }
        } else {
            while (j < n && a[j] <= 0) {
                sum += a[j];
                j++;
            }
        }
        blocks.pb(sum);
        i = j;
    }

    int start = 0;
    while (start < (int)blocks.size() && blocks[start] <= 0) {
        start++;
    }

    int end = (int)blocks.size() - 1;
    while (end >= start && blocks[end] <= 0) {
        end--;
    }

    if (start > end) {
        cout << 0 << "\n";
        return 0;
    }

    int cnt = 0;
    int total_sum = 0;
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    for (int i = start; i <= end; ++i) {
        node_cnt++;
        int id = node_cnt;
        nodes[id].val = abs(blocks[i]);
        nodes[id].deleted = false;
        nodes[id].left = id - 1;
        nodes[id].right = 0;

        if (id > 1) {
            nodes[id - 1].right = id;
        }

        if (blocks[i] > 0) {
            cnt++;
            total_sum += blocks[i];
        }

        pq.push({nodes[id].val, id});
    }

    nodes[1].left = 0;
    nodes[node_cnt].right = 0;

    while (cnt > k && !pq.empty()) {
        auto [v, u] = pq.top();
        pq.pop();

        if (nodes[u].deleted) continue;

        if (nodes[u].left == 0) {
            total_sum -= nodes[u].val;
            cnt--;
            nodes[u].deleted = true;

            int r = nodes[u].right;
            if (r != 0) {
                nodes[r].deleted = true;
                int rr = nodes[r].right;
                if (rr != 0) {
                    nodes[rr].left = 0;
                }
            }
        } else if (nodes[u].right == 0) {
            total_sum -= nodes[u].val;
            cnt--;
            nodes[u].deleted = true;

            int l = nodes[u].left;
            if (l != 0) {
                nodes[l].deleted = true;
                int ll = nodes[l].left;
                if (ll != 0) {
                    nodes[ll].right = 0;
                }
            }
        } else {
            total_sum -= nodes[u].val;
            cnt--;
            nodes[u].deleted = true;

            int l = nodes[u].left;
            int r = nodes[u].right;

            nodes[l].deleted = true;
            nodes[r].deleted = true;

            node_cnt++;
            int new_id = node_cnt;
            nodes[new_id].val = nodes[l].val + nodes[r].val - nodes[u].val;
            nodes[new_id].deleted = false;

            int ll = nodes[l].left;
            int rr = nodes[r].right;

            nodes[new_id].left = ll;
            nodes[new_id].right = rr;

            if (ll != 0) nodes[ll].right = new_id;
            if (rr != 0) nodes[rr].left = new_id;

            pq.push({nodes[new_id].val, new_id});
        }
    }

    cout << max(0LL, total_sum) << "\n";

    return 0;
}
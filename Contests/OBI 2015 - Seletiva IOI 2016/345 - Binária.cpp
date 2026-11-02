#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

typedef vector<int> vi;

const int MOD = 1e9 + 7;
const int MAXN = 105;

int C[MAXN][MAXN];
int F[MAXN][MAXN];
int fact[MAXN];
int inv_fact[MAXN];

int power(int base, int exp) {
    int res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

int mod_inverse(int n) {
    return power(n, MOD - 2);
}

void precompute() {
    for (int i = 0; i < MAXN; ++i) {
        C[i][0] = 1;
        for (int j = 1; j <= i; ++j) {
            C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % MOD;
        }
    }

    fact[0] = 1;
    inv_fact[0] = 1;
    for (int i = 1; i < MAXN; ++i) {
        fact[i] = (fact[i - 1] * i) % MOD;
        inv_fact[i] = mod_inverse(fact[i]);
    }

    for (int h = 0; h < MAXN; ++h) {
        F[0][h] = 1;
    }
    for (int n = 1; n < MAXN; ++n) {
        F[n][0] = 0;
    }

    for (int h = 1; h < MAXN; ++h) {
        for (int n = 1; n < MAXN; ++n) {
            int sum = 0;
            for (int i = 1; i <= n; ++i) {
                int left_ways = F[i - 1][h - 1];
                int right_ways = F[n - i][h - 1];
                int term = (C[n - 1][i - 1] * left_ways) % MOD;
                term = (term * right_ways) % MOD;
                sum = (sum + term) % MOD;
            }
            F[n][h] = sum;
        }
    }
}

struct TreeNode {
    int val;
    int left = -1, right = -1;
    int depth = 1;
};

int32_t main() {
    fastio;
    precompute();

    int n, k, h;
    if (!(cin >> n >> k >> h)) return 0;

    vi v(k);
    for (int i = 0; i < k; ++i) {
        cin >> v[i];
    }

    vector<TreeNode> nodes;
    int root = -1;
    int H0 = 0;

    for (int i = 0; i < k; ++i) {
        int val = v[i];
        if (root == -1) {
            root = 0;
            nodes.pb({val, -1, -1, 1});
        } else {
            int curr = root;
            while (true) {
                if (val < nodes[curr].val) {
                    if (nodes[curr].left == -1) {
                        nodes[curr].left = nodes.size();
                        nodes.pb({val, -1, -1, nodes[curr].depth + 1});
                        break;
                    } else {
                        curr = nodes[curr].left;
                    }
                } else {
                    if (nodes[curr].right == -1) {
                        nodes[curr].right = nodes.size();
                        nodes.pb({val, -1, -1, nodes[curr].depth + 1});
                        break;
                    } else {
                        curr = nodes[curr].right;
                    }
                }
            }
        }
    }

    for (const auto& nd : nodes) {
        H0 = max(H0, nd.depth);
    }

    vi u;
    u.pb(0);
    for (int x : v) u.pb(x);
    sort(all(u));
    u.pb(n + 1);

    vi s(k + 1);
    vi depth_null(k + 1);

    for (int j = 0; j <= k; ++j) {
        s[j] = max(0LL, u[j + 1] - u[j] - 1);
        if (s[j] > 0) {
            int x = u[j] + 1;
            if (k == 0) {
                depth_null[j] = 1;
            } else {
                int curr = root;
                while (true) {
                    if (x < nodes[curr].val) {
                        if (nodes[curr].left == -1) {
                            depth_null[j] = nodes[curr].depth + 1;
                            break;
                        } else {
                            curr = nodes[curr].left;
                        }
                    } else {
                        if (nodes[curr].right == -1) {
                            depth_null[j] = nodes[curr].depth + 1;
                            break;
                        } else {
                            curr = nodes[curr].right;
                        }
                    }
                }
            }
        }
    }

    int m = n - k;
    int multinomial = fact[m];
    for (int j = 0; j <= k; ++j) {
        multinomial = (multinomial * inv_fact[s[j]]) % MOD;
    }

    auto count_le = [&](int target_h) -> int {
        if (target_h < 0) return 0;
        if (H0 > target_h) return 0;

        int ways = 1;
        for (int j = 0; j <= k; ++j) {
            if (s[j] == 0) continue;
            int limit = target_h - depth_null[j] + 1;
            if (limit < 0) return 0;
            limit = min(limit, s[j]);
            ways = (ways * F[s[j]][limit]) % MOD;
        }
        return ways;
    };

    int ans_tuples = (count_le(h) - count_le(h - 1) + MOD) % MOD;
    int total_ans = (ans_tuples * multinomial) % MOD;

    cout << total_ans << "\n";

    return 0;
}
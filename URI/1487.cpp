# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAX = 6e2 + 1;

int dp[MAX], n, t, tc, val[MAX], wt[MAX];

int main () {_
    while (cin >> n >> t && n) {
        memset(dp, 0, sizeof(dp));
        for (int i = 0; i < n; i++) cin >> wt[i] >> val[i];
        for (int i = 0; i <= t; i++) for (int j = 0; j < n; j++) if (wt[j] <= i) dp[i] = max(dp[i], dp[i - wt[j]] + val[j]);
        cout << "Instancia " << ++tc << "\n" << dp[t] << "\n\n";
    }
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAX = 31;

int dp[MAX], n, p, val[MAX], wt[MAX];

int main () {_
    while (cin >> n && n) {
        memset(dp, 0, sizeof(dp));
        cin >> p; 
        for (int i = 0; i < n; i++) cin >> val[i] >> wt[i];
        for (int i = 1; i <= n; i++) for (int j = p; j >= 0; j--) if (wt[i - 1] <= j) dp[j] = max(dp[j], dp[j - wt[i - 1]] + val[i - 1]);
        cout << dp[p] << " min.\n";
    }
}
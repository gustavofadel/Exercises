# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAX = 101;

int dp[MAX], k, n, r, t, val[MAX], wt[MAX];

int main () {_
    cin >> t;
    
    while (t--) {
        memset(dp, 0, sizeof(dp));
        cin >> n; 
        for (int i = 0; i < n; i++) cin >> val[i] >> wt[i];
        cin >> k >> r;
        for (int i = 1; i <= n; i++) for (int j = k; j >= 0; j--) if (wt[i - 1] <= j) dp[j] = max(dp[j], dp[j - wt[i - 1]] + val[i - 1]);
        cout << (dp[k] >= r ? "Missao completada com sucesso" : "Falha na missao") << "\n";
    }
}
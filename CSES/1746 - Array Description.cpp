# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

typedef long long ll;

const int M = 1e2 + 10;
const int N = 1e5 + 10;
const ll MOD = 1e9 + 7;

int m, n, x[N];
ll ans, dp[N][M];

int main () {_
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    
    if (x[0] == 0) fill(dp[0], dp[0] + m + 1, 1);
    else dp[0][x[0]] = 1;
    
    for (int i = 1; i < n; i++) {
        if (x[i] == 0) {
            for (int j = 1; j <= m; j++) {
                dp[i][j] += dp[i - 1][j];
                if (j - 1 > 0) dp[i][j] += dp[i - 1][j - 1];
                if (j + 1 <= m) dp[i][j] += dp[i - 1][j + 1];
                dp[i][j] %= MOD;
            }
        }
        
        else {
            dp[i][x[i]] += dp[i - 1][x[i]];
            if (x[i] - 1 > 0) dp[i][x[i]] += dp[i - 1][x[i] - 1];
            if (x[i] + 1 <= m) dp[i][x[i]] += dp[i - 1][x[i] + 1];
            dp[i][x[i]] %= MOD;
        }
    }
    
    for (int j = 1; j <= m; j++) {
        (ans += dp[n - 1][j]) %= MOD;
    }
    
    cout << ans << "\n";
}
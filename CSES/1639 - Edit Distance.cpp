# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

const int N = 5e3 + 10;

int dp[2][N], m, n;
string x, y;

int main () {_
    cin >> x >> y;
    
    n = x.size(), m = y.size();
    
    for (int j = 0; j <= n; j++) {
        dp[0][j] = j;
    }
    
    for (int i = 1; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (!j) dp[i & 1][j] = i;
            else if (x[j - 1] == y[i - 1]) dp[i & 1][j] = dp[(i - 1) & 1][j - 1];
            else dp[i & 1][j] = min({dp[(i - 1) & 1][j], dp[i & 1][j - 1], dp[(i - 1) & 1][j - 1]}) + 1;
        }
    }
    
    cout << dp[m & 1][n] << "\n";
}
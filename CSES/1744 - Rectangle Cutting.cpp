# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

const int INF = 0x3f3f3f3f;
const int MAX = 5e2 + 10;

int a, b, dp[MAX][MAX];

int main () {_
    cin >> a >> b;
    
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            if (i == j) dp[i][j] = 0;
            else {
                dp[i][j] = INF;
                for (int k = 1; k < i; k++) dp[i][j] = min(dp[i][j], dp[k][j] + dp[i - k][j] + 1);
                for (int k = 1; k < j; k++) dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j - k] + 1);
            }
        }
    }
    
    cout << dp[a][b] << "\n";
}
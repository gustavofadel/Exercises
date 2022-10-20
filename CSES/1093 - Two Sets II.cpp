# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

typedef long long ll;

const int N = 5e2 + 10;
const int SUM = N * (N + 1) / 4;
const ll MOD = 1e9 + 7;

int n, tgt;
ll dp[N][SUM];

int main () {_
    cin >> n;
    
    tgt = (n * (n + 1)) >> 1;
    
    if (tgt & 1) return !(cout << "0\n");
    
    dp[0][0] = 1, tgt >>= 1;
    
    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= tgt; j++) {
            dp[i][j] = (dp[i - 1][j] + (j - i >= 0 ? dp[i - 1][j - i] : 0)) % MOD;
        }
    }
    
    cout << dp[n - 1][tgt] << "\n";
}
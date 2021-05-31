# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e6 + 10;
const int MOD = 1e9 + 7;

int dp[MAXN], n;

int main () {_
  cin >> n;
  
  dp[0] = 1;
  
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= 6 && i >= j; j++) {
      dp[i] = (dp[i] + dp[i - j]) % MOD;
    }
  }
  
  cout << dp[n] << "\n";
  
  return 0;
}
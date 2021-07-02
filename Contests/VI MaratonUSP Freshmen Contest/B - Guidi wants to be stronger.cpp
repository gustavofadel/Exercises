# include <bits/stdc++.h>
 
using namespace std;
 
# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
const int MAXN = 1e3 + 10;
 
int dp[MAXN][MAXN], m, n;
string a, b;
 
int main () {_
  cin >> a >> b; n = a.size(); m = b.size();
  
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (a[i - 1] == b[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1] + 1;
      }
      
      else {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }
  
  cout << dp[n][m] << "\n";
  
  return 0;
}
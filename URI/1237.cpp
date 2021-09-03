# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int m, n;
string s1, s2;

int main () {_
  while (getline(cin, s1) && getline(cin, s2)) {
    m = s1.size(); n = s2.size();
    
    int dp[m + 1][n + 1], res = 0;
    
    for (int i = 0; i <= m; i++) {
      for (int j = 0; j <= n; j++) {
        if (!i || !j || s1[i - 1] != s2[j - 1]) {
          dp[i][j] = 0;
        }
        
        else {
          res = max(res, dp[i][j] = dp[i - 1][j - 1] + 1);
        }
      }
    }
    
    cout << res << "\n";
  }
  
  return 0;
}
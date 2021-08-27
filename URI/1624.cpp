# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int m, n;

int main () {_
  while (cin >> n && n) {
    int p[n], w[n];
    
    for (int i = 0; i < n; i++) {
      cin >> p[i] >> w[i];
    }
    
    cin >> m;
    
    int dp[m + 1];
    
    memset(dp, 0, sizeof(dp));
    
    for (int i = 0; i < n; i++) {
      for (int j = m; j >= 0; j--) {
        if (w[i] <= j) {
          dp[j] = max(dp[j], dp[j - w[i]] + p[i]);
        }
      }
    }
    
    cout << dp[m] << "\n";
  }
  
  return 0;
}
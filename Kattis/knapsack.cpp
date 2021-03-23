# include <bits/stdc++.h>

using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int c, n;
  
  while (cin >> c >> n) {
    int v[n], w[n];
    
    for (int i = 0; i < n; i++) {
      cin >> v[i] >> w[i];
    }
    
    int dp[n + 1][c + 1];
    
    for (int i = 0; i <= n; i++) {
      for (int j = 0; j <= c; j++) {
        if (i == 0 || j == 0) {
          dp[i][j] = 0;
        }
        
        else if (w[i - 1] <= j) {
          dp[i][j] = max(v[i - 1] + dp[i - 1][j - w[i - 1]], dp[i - 1][j]);
        }
        
        else {
          dp[i][j] = dp[i - 1][j];
        }
      }
    }
    
    vector<int> indices;
    
    for (int i = n, j = c; i > 0; i--) {
      if (dp[i][j] != dp[i - 1][j]) {
        indices.push_back(i - 1);
        j -= w[i - 1];
      }
    }
    
    cout << indices.size() << "\n";
    
    for (int i: indices) {
      cout << i << " ";
    }
    
    cout << "\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

const int MAXK = 20;

int d[MAXK], dp[1 << MAXK][7], k;

int solve (int a, int b) {
  if (a == 0) {
    return 0;
  }
    
  if (dp[a][b] == -1) {
    dp[a][b] = 1 << MAXK;
    
    for (int i = 0; i < k; i++) {
      if (a & (1 << i)) {
        int m = max(d[i], b + 1);
        dp[a][b] = min(dp[a][b], m - b + solve(a ^ (1 << i), m - b - 1));
      }
    }
  }
  
  return dp[a][b];
}

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  memset(dp, -1, sizeof(dp));
  
  cin >> k;
  
  for (int i = 0; i < k; i++) {
    cin >> d[i];
  }
  
  cout << solve((1 << k) - 1, 0) << "\n";
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int INF = 1e9 + 10;
const int MAXN = 1e6 + 10;

int c[MAXN], dp[MAXN], n, x;

int main () {_
  cin >> n >> x;
  
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }
  
  dp[0] = 0;
  
  for (int i = 1; i <= x; i++) {
    dp[i] = INF;
  }
  
  for (int i = 1; i <= x; i++) {
    for (int j = 0; j < n; j++) {
      if (i - c[j] >= 0) {
        dp[i] = min(dp[i], dp[i - c[j]] + 1);
      }
    }
  }
  
  cout << (dp[x] == INF ? -1 : dp[x]) << "\n";
  
  return 0;
}
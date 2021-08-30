# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e5 + 10;

int n, res, t[MAXN];

int main () {_
  cin >> n;
  
  for (int i = 1; i <= n; i++) {
    cin >> t[i];
  }
  
  sort(t + 1, t + n + 1, greater<int>());
  
  for (int i = 1; i <= n; i++) {
    res = max(res, i + t[i] + 1);
  }
  
  cout << res << "\n";
  
  return 0;
}
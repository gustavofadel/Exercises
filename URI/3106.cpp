# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e5 + 10;

int n, res, s[MAXN];

int main () {_
  cin >> n;
  
  for (int i = 0; i < n; cin >> s[i], res += s[i] - (s[i++] % 3));
  
  cout << res << "\n";
  
  return 0;
}
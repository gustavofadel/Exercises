# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, res = 7;

int main () {_
  cin >> n;
  
  if (n >= 101) res += 5 * (n - 100) + 160;
  else if (n >= 31) res += 2 * (n - 30) + 20;
  else if (n >= 11) res += (n - 10);
  
  return cout << res << "\n", 0;
}
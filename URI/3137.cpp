# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int p, res;

int main () {_
  cin >> p;
  
  for (int i = 1; i <= p; res += (p - i + 1), i *= 10);
  
  return cout << res << "\n", 0;
}
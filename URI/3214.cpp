# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int c, e, f, res;

int main () {_
  cin >> e >> f >> c; e += f;
  
  while (e >= c) {
    e -= c - 1; res++;
  }
  
  cout << res << "\n";
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, t;

int main () {_
  cin >> t; for (int i = 0; i < t; cin >> n, cout << (n & 1 ? 9 : 1) << "\n", i++);
  
  return 0;
}
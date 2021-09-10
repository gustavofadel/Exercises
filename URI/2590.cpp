# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, res[4] = {1, 7, 9, 3}, t;

int main () {_
  cin >> t;
  
  for (int i = 0; i < t; cin >> n, cout << res[n % 4] << "\n", i++);
  
  return 0;
}
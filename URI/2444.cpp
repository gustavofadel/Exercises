# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, t, v;

int main () {_  
  cin >> v >> t;
  
  for (int i = 0; i < t; cin >> a, v = max(0, min(v + a, 100)), i++);
  
  return cout << v << "\n", 0;
}
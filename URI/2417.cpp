# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int c[3], f[3];

int main () {_
  for (int i = 0; i < 3; cin >> c[i++]); for(int i = 0; i < 3; cin >> f[i++]);
  
  if (3 * c[0] + c[1] > 3 * f[0] + f[1]) {
    cout << "C\n";
  }
  
  else if (3 * c[0] + c[1] == 3 * f[0] + f[1]) {
    cout << (c[2] > f[2] ? "C" : (c[2] == f[2] ? "=" : "F")) << "\n";
  }
  
  else {
    cout << "F\n";
  }
  
  return 0;
}
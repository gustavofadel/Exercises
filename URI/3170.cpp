# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int b, g;

int main () {_
  cin >> b >> g;
  
  if (b >= g / 2) {
    cout << "Amelia tem todas bolinhas!\n";
  }
  
  else {
    cout << "Faltam " << g / 2 - b << " bolinha(s)\n";
  }
  
  return 0;
}
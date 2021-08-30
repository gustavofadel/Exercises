# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int h, l, z;

int main () {_
  cin >> h >> z >> l;
  
  if ((h > z && h < l) || (h < z && h > l)) {
    cout << "huguinho\n";
  }
  
  else if ((l > h && l < z) || (l < h && l > z)) {
    cout << "luisinho\n";
  }
  
  else {
    cout << "zezinho\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int c, g;

int main () {_
  cin >> c >> g;
  
  if (c / g > 9) {
    cout << "A UFSC fecha dia " << c / g - 9 << " de outubro.\n";
  }
  
  else {
    cout << "A UFSC fecha dia " << 21 + c / g << " de setembro.\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int s, va, vb;

int main () {_
  cout << fixed << setprecision(2);
  
  while (cin >> s >> va >> vb) {
    if (va <= vb) {
      cout << "impossivel\n";
    }
    
    else {
      cout << (float) s / (va - vb) << "\n";
    }
  }
  
  return 0;
}
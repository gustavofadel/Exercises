# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int j, n, tc, z;

int main () {_
  while (cin >> n && n) {
    int cur = 0;
    
    cout << "Teste " << ++tc << "\n";
    
    while (n--) {
      cin >> j >> z; cur += (j - z); cout << cur << "\n";
    }
    
    cout << "\n";
  }
  
  return 0;
}
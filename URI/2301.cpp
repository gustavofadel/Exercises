# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int j, n, p, r, tc;

int main () {_
  while (cin >> p >> r && (p || r)) {
    vector<int> x(p);
    
    for (int i = 0; i < p; cin >> x[i++]);
    
    while (r--) {
      cin >> n >> j;
      
      for (int a, i = 0; i < n; i++) {
        cin >> a;
        
        if (a != j) {
          x[i] = -1;
        }
      }
      
      x.erase(remove(x.begin(), x.end(), -1), x.end());
    }
    
    cout << "Teste " << ++tc << "\n" << x[0] << "\n\n";
  }
  
  return 0;
}
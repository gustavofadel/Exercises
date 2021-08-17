# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int c, m, t; 

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> m >> c;
    
    int a[c];
    vector<int> v[m];
    
    for (int i = 0; i < c; i++) {
      cin >> a[i]; v[a[i] % m].push_back(a[i]);
    }
    
    for (int i = 0; i < m; i++) {
      cout << i << " -> ";
      
      for (int n: v[i]) {
        cout << n << " -> ";
      }
      
      cout << "\\\n";
    }
    
    cout << (t ? "\n" : "");
  }
  
  return 0;
}
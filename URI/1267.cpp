# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int d, n;

int main () {_
  while (cin >> n >> d && (n || d)) {
    bool exists = false;
    int mat[d][n];
    
    for (int i = 0; i < d; i++) for (int j = 0; j < n; cin >> mat[i][j], j++);
    
    for (int j = 0; j < n && !exists; j++) {
      int i;
      
      for (i = 0; i < d && mat[i][j]; i++);
      
      exists |= (i == d);
    }
    
    cout << (exists ? "yes" : "no") << "\n";
  }
  
  return 0;
}
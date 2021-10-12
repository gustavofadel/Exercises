# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXP = 1e2 + 10;

int g, k, mat[MAXP][MAXP], p, pts[MAXP], s, vet[MAXP];

int main () {_
  while (cin >> g >> p && (g || p)) {
    for (int i = 1; i <= g; i++) for (int j = 1; j <= p; cin >> mat[i][j++]);
    
    cin >> s;
    
    while (s--) {
      int fst = 1, res = INT_MIN;
      
      fill(pts, pts + MAXP, 0); fill(vet, vet + MAXP, 0);
      
      cin >> k; for (int i = 1; i <= k; cin >> vet[i++]);
      
      for (int i = 1; i <= g; i++) for (int j = 1; j <= p; pts[j] += vet[mat[i][j]], res = max(res, pts[j++]));
      
      for (int i = 1; i <= p; i++) {
        if (pts[i] == res) {
          if (!fst) cout << " ";
          fst = 0; cout << i;
        }
      }
      
      cout << "\n";
    }
  }
  
  return 0;
}
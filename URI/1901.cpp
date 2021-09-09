# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int mat[210][210], n, x, y;
set<int> st;

int main () {_
  cin >> n;
  
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> mat[i][j];
    }
  }
  
  for (int i = 0; i < 2 * n; cin >> x >> y, st.insert(mat[x][y]), i++);
  
  cout << st.size() << "\n";
  
  return 0;
}
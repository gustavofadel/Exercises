# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool res;
int mat[510][510], n, x, y; 

int main () {_
  cin >> n;
  
  for (int i = 0; i < n; cin >> x >> y, res |= mat[x][y], mat[x][y] = 1, i++);
  
  return cout << (int) res << "\n", 0;
}
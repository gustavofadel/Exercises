# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int m, n, s;
map<char, int> mp;
pair<int, int> pos;
string op;

int main () {_
  mp['N'] = 0; mp['L'] = 1; mp['S'] = 2; mp['O'] = 3;

  while (cin >> n >> m >> s && (n || m || s)) {
    int cnt = 0, cur = -1;
    string mat[n];
    
    for (int i = 0; i < n; i++) {
      cin >> mat[i];
      
      for (int j = 0; j < m && cur == -1; j++) {
        if (isalpha(mat[i][j])) {
          cur = mp[mat[i][j]]; pos = {i, j};
        }
      }
    }
    
    cin >> op;
    
    for (char c: op) {
      if (c == 'F') {
        if (cur == 0 && mat[max(pos.first - 1, 0)][pos.second] != '#') {
          pos = {max(pos.first - 1, 0), pos.second};
        }
        
        else if (cur == 1 && mat[pos.first][min(pos.second + 1, m - 1)] != '#') {
          pos = {pos.first, min(pos.second + 1, m - 1)};
        }
        
        else if (cur == 2 && mat[min(pos.first + 1, n - 1)][pos.second] != '#') {
          pos = {min(pos.first + 1, n - 1), pos.second};
        }
        
        else if (cur == 3 && mat[pos.first][max(pos.second - 1, 0)] != '#') {
          pos = {pos.first, max(pos.second - 1, 0)};
        }
      }
      
      else {
        cur = (c == 'E' ? (cur + 3) % 4 : (cur + 1) % 4);
      }
      
      if (mat[pos.first][pos.second] == '*') {
        cnt++; mat[pos.first][pos.second] = '.';
      }
    }
    
    cout << cnt << "\n";
  }
  
  return 0;
}
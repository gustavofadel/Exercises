# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int m, n;
map<int, int> mp;
queue<int> q;

int main () {_
  cin >> n >> m; 
  
  mp[n] = 0; q.push(n);
  
  while (!q.empty()) {
    int x = q.front(); q.pop();
    
    if (x == m) {
      break;
    }
    
    int vet[6] = {x * 2, x * 3, x / 2, x / 3, x + 7, x - 7};
    
    for (int y: vet) {
      if (!mp[y] && y != n) {
        mp[y] = mp[x] + 1; q.push(y);
      }
    }
  }
  
  cout << mp[m] << "\n";
  
  return 0;
}
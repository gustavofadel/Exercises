# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int tc, v, values[4] = {50, 10, 5, 1};

int main () {_
  while (cin >> v && v) {
    bool first = true;
    map<int, int, greater<int>> mp; 
    
    for (int i = 0; i < 4; mp[values[i]] = v / values[i], v %= values[i++]);
    
    cout << "Teste " << ++tc << "\n";
    
    for (auto [k, v]: mp) {
      if (!first) {
        cout << " ";
      }
      
      first = false; cout << v; 
    }
    
    cout << "\n\n";
  }
  
  return 0;
}
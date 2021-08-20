# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int m, n, value;
map<string, int> mp;
string line, word;

int main () {_
  while (cin >> m >> n) {
    while (m--) {
      cin >> word >> value; mp[word] = value;
    }
    
    cin.ignore();
    
    while (n--) {
      int res = 0;
      
      while (getline(cin, line) && line != ".") {
        stringstream ss(line);
        
        while (ss >> word) {
          res += mp[word];
        }
      }
      
      cout << res << "\n";
    }
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;
string s;

int main () {_
  while (cin >> n && n) {
    int dir = 0;
    
    cin >> s;
    
    for (char c: s) {
      dir = (dir + (c == 'E' ? 3 : 1)) % 4;
    }
    
    cout << "NLSO"[dir] << "\n";
  }
  
  return 0;
}
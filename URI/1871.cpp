# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

ll m, n;

int main () {_
  while (cin >> n >> m && (n || m)) {
    string s = to_string(n + m);
    
    for (char c: s) {
      if (c != '0') {
        cout << c;
      }
    }
    
    cout << "\n";
  }
  
  return 0;
}
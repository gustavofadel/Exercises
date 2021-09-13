# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, p, t;
string s;

int main () {_
  while (cin >> t >> n && t) {
    int sum = 0;
    
    while (t--) {
      cin >> s >> p; sum += p;
    }
    
    cout << 3 * n - sum << "\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, t;
string s;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> s >> n;
    
    for (int i = 0; i < s.size(); i++) {
      s[i] -= n;
      
      if (s[i] < 'A') {
        s[i] += 26;
      }
    }
    
    cout << s << "\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;
string s;

int main () {_
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    cin >> s;
    
    if (s.size() == 3) {
      if (s[0] == 'O' && s[1] == 'B') {
        s = "OBI";
      }
      
      else if (s[0] == 'U' && s[1] == 'R') {
        s = "URI";
      }
    }
    
    cout << s << " \n"[i == n - 1];
  }
  
  return 0;
}
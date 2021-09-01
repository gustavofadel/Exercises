# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t;
string s;

int main () {_
  cin >> t; cin.ignore();
  
  while (t--) {
    getline(cin, s);
    
    for (int i = 0; i < s.size(); i++) {
      if (isalpha(s[i])) {
        s[i] += 3;
      }
    }
    
    reverse(s.begin(), s.end());
    
    for (int i = s.size() / 2; i < s.size(); s[i]--, i++);
    
    cout << s << "\n";
  }
  
  return 0;
}
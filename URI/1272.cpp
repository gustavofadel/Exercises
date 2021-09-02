# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t;
string s1, s2;

int main () {_
  cin >> t; cin.ignore();
  
  while (t--) {
    bool space = true;
    
    getline(cin, s1); s2 = "";
    
    for (int i = 0; i < s1.size(); i++) {
      if (isalpha(s1[i]) && space) {
        s2 += s1[i]; space = false;
      }
      
      else if (s1[i] == ' ') {
        space = true;
      }
    }
    
    cout << s2 << "\n";
  }
  
  return 0;
}
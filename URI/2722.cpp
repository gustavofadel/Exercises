# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t;
string s1, s2;

int main () {_
  cin >> t; cin.ignore();
  
  while (t--) {
    getline(cin, s1); getline(cin, s2);
    
    for (int i = 0; i < s1.size() - 1; i += 2) {
      cout << s1[i] << s1[i + 1] << s2[i];
      
      if (i < s1.size() - 2 || (i == s1.size() - 2 && s1.size() == s2.size())) {
        cout << s2[i + 1];
      }
    }
    
    cout << "\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int pos;
string cobol = "cobol", s;

int main () {_
  while (cin >> s) {
    int i = 0;
    vector<string> vet;
    
    while ((pos = s.find('-')) != string::npos) {
      vet.push_back(s.substr(0, pos)); s.erase(0, pos + 1);
    }
    
    vet.push_back(s);
    
    for (string s: vet) {
      if (tolower(s[0]) == cobol[i] || tolower(s[s.size() - 1]) == cobol[i]) {
        i++;
      }
      
      if (i == 5) {
        break;
      }
    }
    
    cout << (i == 5 ? "GRACE HOPPER" : "BUG") << "\n";
  }
  
  return 0;
}
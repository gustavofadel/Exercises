# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

char d;
string n;

int main () {_
  while (cin >> d >> n && d != '0' && n != "0") {
    bool flag = false;
    int pos;
    string s;
    
    for (char c: n) {
      if (c != d) {
        s += c;
      }
    }
    
    for (int i = 0; i < s.size() && !flag; i++) {
      flag = (s[i] != '0');
    }
    
    if (!s.size() || !flag) {
      s = "0";
    }
    
    for (pos = 0; pos < s.size(); pos++) {
      if (s[pos] != '0') {
        s = s.substr(pos, s.size()); break;
      }
    }
    
    cout << s << "\n";
  }
  
  return 0;
}
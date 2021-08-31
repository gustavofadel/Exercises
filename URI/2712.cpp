# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t;
map<char, string> mp;
string s;

int main () {_
  mp['1'] = mp['2'] = "MONDAY"; mp['3'] = mp['4'] = "TUESDAY";
  mp['5'] = mp['6'] = "WEDNESDAY"; mp['7'] = mp['8'] = "THURSDAY";
  mp['9'] = mp['0'] = "FRIDAY";
  
  cin >> t;
  
  while (t--) {
    cin >> s;
    
    if (s.size() == 8) {
      if (isupper(s[0]) && isupper(s[1]) && isupper(s[2]) && s[3] == '-' && isdigit(s[4]) && isdigit(s[5]) && isdigit(s[6]) && isdigit(s[7])) {
        cout << mp[s[7]] << "\n";
      }
      
      else {
        cout << "FAILURE\n";
      }
    }
    
    else {
      cout << "FAILURE\n";
    }
  }
  
  return 0;
}
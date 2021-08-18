# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

map<char, float> mp;
string s;

int main () {_
  mp['W'] = 1; mp['H'] = 1.0 / 2; mp['Q'] = 1.0 / 4; mp['E'] = 1.0 / 8;
  mp['S'] = 1.0 / 16; mp['T'] = 1.0 / 32; mp['X'] = 1.0 / 64;

  while (cin >> s && s != "*") {
    float sum = 0;
    int cnt = 0;
    
    for (int i = 1; i < s.size(); i++) {
      if (s[i] == '/') {
        cnt += (sum == 1.0); sum = 0;
      }
      
      else {
        sum += mp[s[i]];
      }
    }
    
    cout << cnt << "\n";
  }
  
  return 0;
}
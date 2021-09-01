# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t;
map<char, int> mp;
string s;

int main () {_
  mp['1'] = 2; mp['2'] = 5; mp['3'] = 5; mp['4'] = 4; mp['5'] = 5;
  mp['6'] = 6; mp['7'] = 3; mp['8'] = 7; mp['9'] = 6; mp['0'] = 6;
  
  cin >> t;
  
  while (t--) {
    int cnt = 0;
    
    cin >> s;
    
    for (char c: s) {
      cnt += mp[c];
    }
    
    cout << cnt << " leds\n";
  }
  
  return 0;
}
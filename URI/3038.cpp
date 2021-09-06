# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

map<char, char> mp;
string s;

int main () {_
  mp['@'] = 'a'; mp['&'] = 'e'; mp['!'] = 'i'; mp['*'] = 'o'; mp['#'] = 'u';
  
  while (getline(cin, s)) {
    for (char c: s) {
      cout << (mp.count(c) ? mp[c] : c);
    }
    
    cout << "\n";
  }
  
  return 0;
}
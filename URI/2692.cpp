# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

char e, s;
int m, n;
map<char, char> mp;
string phrase;

int main () {_
  cin >> n >> m;
  
  while (n--) {
    cin >> e >> s; mp[e] = s; mp[s] = e;
  }
  
  getline(cin, phrase);
  
  while (m--) {
    getline(cin, phrase);
    
    for (char c: phrase) {
      cout << (mp.count(c) ? mp[c] : c);
    }
    
    cout << "\n";
  }
  
  return 0;
}
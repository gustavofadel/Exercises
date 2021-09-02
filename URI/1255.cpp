# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t;
string s;

int main () {_
  cin >> t; cin.ignore();
  
  while (t--) {
    int freq = 0;
    map<char, int> mp;
    
    getline(cin, s);
    
    for (char c: s) {
      if (isalpha(c)) {
        freq = max(freq, ++mp[tolower(c)]);
      }
    }
    
    for (auto [k, v]: mp) {
      if (v == freq) {
        cout << k;
      }
    }
    
    cout << "\n";
  }
  
  return 0;
}
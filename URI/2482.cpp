# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int m, n;
map<string, string> mp;
string name, language, translation;

int main () {_
  cin >> n;
  
  while (n--) {
    cin >> language; cin.ignore(); getline(cin, translation);
    mp[language] = translation;
  }
  
  cin >> m;
  
  while (m--) {
    cin.ignore(); getline(cin, name); cin >> language;
    cout << name << "\n" << mp[language] << "\n\n";
  }
  
  return 0;
}
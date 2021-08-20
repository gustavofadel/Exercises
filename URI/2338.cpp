# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t;
map<string, char> mp;
string s;

int main () {_
  mp["=.==="] = 'a'; mp["===.=.=.="] = 'b'; mp["===.=.===.="] = 'c';
  mp["===.=.="] = 'd'; mp["="] = 'e'; mp["=.=.===.="] = 'f';
  mp["===.===.="] = 'g'; mp["=.=.=.="] = 'h'; mp["=.="] = 'i';
  mp["=.===.===.==="] = 'j'; mp["===.=.==="] = 'k'; mp["=.===.=.="] = 'l';
  mp["===.==="] = 'm'; mp["===.="] = 'n'; mp["===.===.==="] = 'o';
  mp["=.===.===.="] = 'p'; mp["===.===.=.==="] = 'q'; mp["=.===.="] = 'r';
  mp["=.=.="] = 's'; mp["==="] = 't'; mp["=.=.==="] = 'u';
  mp["=.=.=.==="] = 'v'; mp["=.===.==="] = 'w'; mp["===.=.=.==="] = 'x';
  mp["===.=.===.==="] = 'y'; mp["===.===.=.="] = 'z';
  
  cin >> t;
  
  while (t--) {
    string aux;
    
    cin >> s;
    
    for (int cnt = 0, i = 0; i < s.size(); i++) {
      if (s[i] != '.') {
        aux += s[i];
      }
      
      else {
        cnt = 0;
        
        while (i + cnt < s.size() && s[i + cnt] == '.') {
          cnt++;
        }
        
        if (cnt >= 3) {
          cout << mp[aux];
          
          if (cnt == 7) {
            cout << " ";
          }
          
          aux = ""; i += cnt - 1;
        }
        
        else {
          aux += s[i];
        }
      }
    }
    
    cout << mp[aux] << "\n";
  }
  
  return 0;
}
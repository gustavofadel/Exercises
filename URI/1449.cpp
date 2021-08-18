# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int m, n, t;
string jp, msc, pt, s;

int main () {_
  cin >> t;
  
  while (t--) {
    map<string, string> mp;
    
    cin >> m >> n;
    
    while (m--) {
      cin >> jp; cin.ignore(); getline(cin, pt); mp[jp] = pt;
    }
    
    while (n--) {
      getline(cin, msc); s = "";
      
      for (int i = 0; i < msc.size(); i++) {
        if (msc[i] == ' ' || i == msc.size() - 1) {
          if (i == msc.size() - 1) {
            s += msc[i];
          }
          
          cout << (mp.count(s) ? mp[s] : s) << " \n"[i == msc.size() - 1]; s = "";
        }
        
        else {
          s += msc[i];
        }
      }
    }
    
    cout << "\n";
  }
  
  return 0;
}
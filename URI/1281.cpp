# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

float res, v;
int n, q, t, x;
string s;

int main () {_
  cin >> t;
  
  while (t--) {
    map<string, float> mp; res = 0;
    
    cin >> n;
    
    while (n--) {
      cin >> s >> v; mp[s] = v;
    }
    
    cin >> q;
    
    while (q--) {
      cin >> s >> x; res += x * mp[s];
    }
    
    cout << fixed << setprecision(2) << "R$ " << res << "\n";
  }
  
  return 0;
}
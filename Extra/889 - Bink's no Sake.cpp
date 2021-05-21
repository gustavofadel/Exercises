# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int op, q, x;
map<int, int> mp;

int main () {_
  cin >> q;
  
  while (q--) {
    cin >> op >> x;
    
    if (op == 1) {
      mp[x]++;
    }
    
    else {
      cout << (mp[x] ? "SIM" : "NAO") << "\n";
      mp[x] += (mp[x] ? -1 : 0);
    }
  }
  
  return 0;
}
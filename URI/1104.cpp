# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, b, x;

int main () {_
  while (cin >> a >> b && (a || b)) {
    int alice = 0, beatriz = 0;
    map<int, int> mp_a, mp_b;
    
    while (a--) {
      cin >> x; mp_a[x] = 1;
    }
    
    while (b--) {
      cin >> x; mp_b[x] = 1;
    }
    
    for (auto [k, v]: mp_a) {
      alice += (!mp_b.count(k));
    }
    
    for (auto [k, v]: mp_b) {
      beatriz += (!mp_a.count(k));
    }
    
    cout << min(alice, beatriz) << "\n";
  }
  
  return 0;
}
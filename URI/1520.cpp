# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int fst, lst, n, q, x, y;

int main () {_
  while (cin >> n) {
    vector<int> v;
    
    while (n--) {
      cin >> x >> y;
      
      for (int i = x; i <= y; i++) {
        v.push_back(i);
      }
    }
    
    sort(v.begin(), v.end());
    
    cin >> q; 
    
    fst = lower_bound(v.begin(), v.end(), q) - v.begin();
    lst = upper_bound(v.begin(), v.end(), q) - v.begin() - 1;
    
    if (v[fst] == q && v[lst] == q) {
      cout << q << " found from " << fst << " to " << lst << "\n";
    }
    
    else {
      cout << q << " not found\n";
    }
  }
  
  return 0;
}
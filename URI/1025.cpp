# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, pos, q, tc, x;

int main () {_
  while (cin >> n >> q && (n || q)) {
    vector<int> vet(n);
    
    for (int i = 0; i < n; i++) {
      cin >> vet[i];
    }
    
    sort(vet.begin(), vet.end());
    
    cout << "CASE# " << ++tc << ":\n";
    
    while (q--) {
      cin >> x; pos = lower_bound(vet.begin(), vet.end(), x) - vet.begin();
      
      cout << x;
      
      if (vet[pos] == x) {
        cout << " found at " << pos + 1 << "\n";
      }
      
      else {
        cout << " not found\n";
      }
    }
  }
  
  return 0;
}
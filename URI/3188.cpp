# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, t;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> n;
    
    bool consistent = true;
    vector<string> vet(n);
    
    for (int i = 0; i < n; i++) {
      cin >> vet[i];
    }
    
    sort(vet.begin(), vet.end());
    
    for (int i = 1; i < n && consistent; i++) {
      consistent &= (vet[i].rfind(vet[i - 1], 0) != 0);
    }
    
    cout << (consistent ? "YES" : "NO") << "\n";
  }
  
  return 0;
}
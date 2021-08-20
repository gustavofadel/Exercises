# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

int n;

int main () {_
  while (cin >> n && n) {
    ll s1 = 0, s2 = 0, vet[n], x = 0;
    
    for (int i = 0; i < n; i++) {
      cin >> vet[i]; x ^= vet[i];
    }
    
    x &= -x;
    
    for (int i = 0; i < n; i++) {
      if (vet[i] & x) {
        s1 ^= vet[i];
      }
      
      else {
        s2 ^= vet[i];
      }
    }
    
    cout << min(s1, s2) << " " << max(s1, s2) << "\n";
  }
  
  return 0;
}
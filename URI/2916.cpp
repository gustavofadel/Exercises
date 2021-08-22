# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

const ll MOD = 1e9 + 7;

int k, n, x;
ll sum;

int main () {_
  while (cin >> n >> k) {
    ll vet[n]; sum = 0;
    
    for (int i = 0; i < n; i++) {
      cin >> vet[i];
    }
    
    sort(vet, vet + n, greater<ll>());
    
    for (int i = 0; i < k; i++) {
      sum = (sum + vet[i]) % MOD;
    }
    
    cout << sum << "\n";
  }
  
  return 0;
}
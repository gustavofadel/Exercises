# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

const ll MOD = pow(2, 31) - 1;

ll bin_pow (ll a, ll b) {
  ll res = 1;
  
  while (b) {
    if (b & 1) {
      res = (res * a) % MOD;
    }
    
    a = (a * a) % MOD; b >>= 1;
  }
  
  return res;
}

ll r;

int main () {_
  cin >> r; cout << bin_pow(3, r) << "\n";
  
  return 0;
}
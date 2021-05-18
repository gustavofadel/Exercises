# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long
# define MOD 1000000007

int n;

ll binaryExponentiation (int b, int e) {
  ll result = 1;
  
  while (e) {
    if (e & 1) {
      result = (result * 1ll * b) % MOD;
    }
    
    b = (b * 1ll * b) % MOD;
    e >>= 1;
  }
  
  return result;
}

int main () {_
  cin >> n;
  
  cout << binaryExponentiation(2, n) << "\n";
  
  return 0;
}
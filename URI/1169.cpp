# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ull unsigned long long

int t;
ull x;

ull bin_pow (ull a, ull b) {
  ull res = 1;
  
  while (b) {
    if (b & 1) {
      res *= a;
    }
    
    a *= a; b >>= 1;
  }
  
  return res;
}

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> x; cout << (x == 64 ? 1537228672809129 : bin_pow(2, x) / 12000) << " kg\n";
  }
  
  return 0;
}
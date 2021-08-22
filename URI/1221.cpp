# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t, x;
map<int, bool> mp;

bool is_prime (int n) {
  if (n == 1) {
    return false;
  }
  
  if (n == 2) {
    return true;
  }
  
  if (n & 1 == 0) {
    return false;
  }
  
  int i = 3;
  
  while (1ll * i * i <= n) {
    if (n % i == 0) {
      return false;
    }
    
    i += 2;
  }
  
  return true;
}

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> x;
    
    if (!mp.count(x)) {
      mp[x] = is_prime(x);
    }
    
    cout << (mp[x] ? "Prime" : "Not Prime") << "\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e8;

bitset<MAXN + 1> notPrime;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, q, x;
  
  cin >> n >> q;
  
  notPrime.set(1);
  
  for (int i = 2; i <= n; i++) {
    if (!notPrime[i]) {
      for (int j = 2 * i; j <= n; j += i) {
        notPrime.set(j);
      }
    }
  }
  
  cout << n - notPrime.count() << "\n";
  
  while (q--) {
    cin >> x;
    
    cout << !notPrime[x] << "\n";
  }
  
  return 0;
}
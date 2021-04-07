# include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int MAXN = 5e5 + 10;

int cnt[MAXN], id[MAXN], inStock[MAXN], n, sieve[MAXN], t, x;
vector<int> factors[MAXN];

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll swords = 0;
  
  sieve[1] = 1;
  
  for (int i = 1; i < MAXN; i++) {
    for (int j = i; j < MAXN; j += i) {
      factors[j].push_back(i);
      
      if (i < j) {
        sieve[j] -= sieve[i];
      }
    }
  }
  
  cin >> n >> t;
  
  for (int i = 0; i < n; i++) {
    cin >> id[i];
  }
  
  while (t--) {
    cin >> x; x--;
    
    for (int y: factors[id[x]]) {
      cnt[y] -= inStock[x];
      swords += (inStock[x] ? -1 : 1) * sieve[y] * cnt[y];
      cnt[y] += !inStock[x];
    }
    
    inStock[x] ^= 1;
    
    cout << swords << "\n";
  }
  
  return 0;
}
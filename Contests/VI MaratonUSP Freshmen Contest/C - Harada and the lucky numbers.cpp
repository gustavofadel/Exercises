# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 10;

char c;
map<char, int> freq;
int a[MAXN], m, n, res;

int main () {_
  cin >> n >> m;
  
  for (int i = 0; i < n; cin >> a[i++]);
  
  while (m--) cin >> c, freq[c]++;
  
  for (int mask = 0; mask < (1 << n); mask++) {
    bool possible = true;
    map<char, int> new_freq = freq;
    
    for (int i = 0; i < n && possible; i++) {
      if (!(mask & (1 << i))) continue;
      for (char c: to_string(a[i])) possible &= (--new_freq[c] >= 0);
    }
    
    if (possible && __builtin_popcount(mask) > __builtin_popcount(res)) res = mask;
  }
  
  cout << __builtin_popcount(res) << "\n";
  
  for (int i = 0; i < n; i++) if (res & (1 << i)) cout << a[i] << " ";
  
  return cout << "\n", 0;
}
# include <bits/stdc++.h>

using namespace std;

# define MAXN 100000
# define MAXSQ 320

int a[MAXN], blk_sz, sq[MAXSQ];

int query (int l, int r) {
  int res = 0;
  
  while (l < r && l % blk_sz != 0 && l != 0) {
    res += a[l++];
  }
  
  while (l + blk_sz <= r) {
    res += sq[l / blk_sz]; l += blk_sz;
  }
  
  while (l <= r) {
    res += a[l++];
  }
  
  return res;
}

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int blk_idx = -1, l, n, q, r, res = 0;
  
  cin >> n >> q;
  
  int x[n];  
  
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
  
  blk_sz = sqrt(n);
  
  for (int i = 0; i < n; i++) {
    a[i] = x[i];
    
    if (i % blk_sz == 0) {
      blk_idx++;
    }
    
    sq[blk_idx] += a[i];
  }
  
  for (int i = 0; i < q; i++) {
    cin >> l >> r; l--; r--;
    res += query(l, r);
  }
  
  cout << res << "\n";
  
  return 0;
}
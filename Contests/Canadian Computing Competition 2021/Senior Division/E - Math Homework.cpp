# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 15e4 + 10;
const int MAXZ = 26;

int a[MAXN], diff[MAXN][MAXZ], m, n, sum[MAXZ], tree[MAXN << 1], x, y, z;
vector<tuple<int, int, int>> v;

void build (int x, int l, int r) {
  if (l == r) {
    tree[x] = a[l];
    return;
  }
  
  int y = (l + r) >> 1, z = x + ((y - l + 1) << 1);
  
  build(x + 1, l, y); build(z, y + 1, r);
  
  tree[x] = __gcd(tree[x + 1], tree[z]);
}

int query (int x, int l, int r, int st, int en) {
  if (st <= l && r <= en) {
    return tree[x];
  }
  
  int res, y = (l + r) >> 1, z = x + ((y - l + 1) << 1);
  
  if (en <= y) {
    res = query(x + 1, l, y, st, en);
  }
  
  else {
    if (st > y) {
      res = query(z, y + 1, r, st, en);
    }
    
    else {
      res = __gcd(query(x + 1, l, y, st, en), query(z, y + 1, r, st, en));
    }
  }
  
  tree[x] = __gcd(tree[x + 1], tree[z]);
  
  return res;
}

int main () {_
  cin >> n >> m;
  
  while (m--) {
    cin >> x >> y >> z; x--; y--;
    diff[x][z]++; diff[y + 1][z]--;
    v.push_back(make_tuple(x, y, z));
  }
  
  for (int i = 0; i < n; i++) {
    int lcm = 1;
    
    for (int j = 1; j <= 16; j++) {
      sum[j] += diff[i][j];
      
      if (sum[j] > 0) {
        lcm = (lcm * j) / __gcd(lcm, j);
      } 
    }
    
    a[i] = lcm;
  }
  
  build(0, 0, n - 1);
  
  for (auto& p: v) {
    tie(x, y, z) = p;
    
    if (query(0, 0, n - 1, x, y) != z) {
      cout << "Impossible\n";
      return 0;
    }
  }
  
  for (int i = 0; i < n; i++) {
    cout << a[i] << " "; 
  }
  
  return 0;
}
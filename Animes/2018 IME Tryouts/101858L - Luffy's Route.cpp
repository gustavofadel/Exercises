# include <bits/stdc++.h>
 
using namespace std;
 
# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
typedef pair<int, int> ii;
 
const int MAXN = 1e5 + 10;
 
ii a[MAXN];
int l, n;
map<ii, int> mp;
 
int main () {_
  cin >> n >> l;
  
  for (int i = 0; i < n; cin >> a[i].first >> a[i++].second); a[n] = {0, 0};
  
  sort(a, a + n + 1, greater<ii>()); mp[{l, 0}] = 0;
  
  for (auto [x, y]: a) {
    int cnt = 0;
    
    for (int dx = 1; dx <= 5; dx++) {
      for (int dy = 0; dy <= 5 - dx; dy++) {
        if (mp.count({x + dx, y + dy})) cnt = max(cnt, mp[{x + dx, y + dy}] + 1);
        if (mp.count({x + dx, y - dy})) cnt = max(cnt, mp[{x + dx, y - dy}] + 1);
      }
      
      if (cnt) mp[{x, y}] = cnt;
    }
  }
  
  return cout << mp[{0, 0}] - 1 << "\n", 0;
}
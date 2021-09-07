# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int freq, n, res, x;
map<int, int> mp;

int main () {_
  cin >> n;
  
  for (; n; cin >> x, mp[x]++, n--);
  
  for (auto [k, v]: mp) {
    if (v >= freq) {
      freq = v; res = k;
    }
  }
  
  return cout << res << "\n", 0;
}
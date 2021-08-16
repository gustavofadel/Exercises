# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, x;
map<int, int> mp;

int main () {_
  cin >> n;
  
  while (n--) {
    cin >> x; mp[x]++;
  }
  
  for (auto [k, v]: mp) {
    cout << k << " aparece " << v << " vez(es)\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>
 
using namespace std;
 
# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int n;
map<int, int, greater<int>> mp;
vector<int> res;
 
int main () {_
  cin >> n;
  
  mp[15] = 1; mp[12] = 2;
  
  for (int i = 3; i <= 12; i++) {
    mp[13 - i] = i;
  }
  
  for (auto [k, v]: mp) {
    while (n >= k) {
      n -= k; res.push_back(v);
    }
  }
  
  cout << res.size() << "\n";
  
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << " \n"[i == res.size() - 1];
  }
  
  return 0;
}
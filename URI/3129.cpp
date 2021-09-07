# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int cnt, n, x;
map<int, int> mp;
set<int> st;

int main () {_
  cin >> n;
  
  while (n--) {
    cin >> x; mp[x]++; st.insert(x);
  }
  
  for (auto [k, v]: mp) {
    cnt += v - 1;
  }
  
  cout << st.size() << "\n" << cnt << "\n";
  
  return 0;
}
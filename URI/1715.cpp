# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int cnt, m, n;

int main () {_
  cin >> n >> m;
  
  for (int i = 0, x; i < n; i++) {
    bool flag = true;
    for (int j = 0; j < m; cin >> x, flag &= (x != 0), j++);
    cnt += flag;
  }
  
  cout << cnt << "\n";
  
  return 0;
}
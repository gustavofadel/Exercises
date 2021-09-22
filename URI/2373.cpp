# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int c, cnt, l, n;

int main () {_
  cin >> n;
  
  while (n--) {
    cin >> l >> c; cnt += (l > c ? c : 0);
  }
  
  return cout << cnt << "\n", 0;
}
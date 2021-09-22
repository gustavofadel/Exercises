# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, res;

int main () {_
  while (cin >> n && n) {
    res = max(res, n);
  }
  
  return cout << res << "\n", 0;
}
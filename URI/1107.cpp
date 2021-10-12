# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, c, x;

int main () {_
  while (cin >> a >> c && (a || c)) {
    int prev = a, res = 0;
    while (c--) { cin >> x; res += max(0, prev - x); prev = x; }
    cout << res << "\n";
  }
  
  return 0;
}
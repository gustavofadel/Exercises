# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int c, m, n;

int main () {_
  while (cin >> n >> m >> c && (n || m || c)) {
    cout << ((n - 7) * (m - 7) + c) / 2 << "\n";
  }
  
  return 0;
}
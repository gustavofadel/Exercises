# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int m, n, t;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> n >> m; cout << ceil((float) n / m) << "\n";
  }
  
  return 0;
}
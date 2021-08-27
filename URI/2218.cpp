# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, t;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> n; cout << n * (n + 1) / 2 + 1 << "\n";
  }
  
  return 0;
}
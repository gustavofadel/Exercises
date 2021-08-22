# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;

int main () {_
  while (cin >> n && n) {
    cout << n * (n + 1) * (2 * n + 1) / 6 << "\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, tc;

int main () {_
  while (cin >> n && ~n) {
    cout << "Experiment " << ++tc << ": " << n / 2 << " full cycle(s)\n";
  }
  
  return 0;
}
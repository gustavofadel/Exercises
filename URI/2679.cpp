# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int x;

int main () {_
  cin >> x; return cout << x + (x & 1 ? 1 : 2) << "\n", 0;
}
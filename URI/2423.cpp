# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, b, c;

int main () {_
  cin >> a >> b >> c; return cout << min(a / 2, min(b / 3, c / 5)) << "\n", 0;
}
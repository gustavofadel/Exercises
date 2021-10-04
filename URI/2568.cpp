# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int d, f, i, x;

int main () {_
  cin >> d >> i >> x >> f; for (int j = d + 1; j <= d + f; i += (j++ & 1 ? -x : x));
  return cout << i << "\n", 0;
}
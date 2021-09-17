# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int d, k, l, p;

int main () {_
  cin >> l >> d >> k >> p; return cout << l * k + p * (l / d) << "\n", 0;
}
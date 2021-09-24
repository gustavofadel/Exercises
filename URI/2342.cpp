# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

char c;
int n, p, q;

int main () {_
  cin >> n >> p >> c >> q; return cout << ((c == '+' ? p + q : p * q) <= n ? "OK" : "OVERFLOW") << "\n", 0;
}
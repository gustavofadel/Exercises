# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, l, p, r;

int main () {_
  cin >> l >> a >> p >> r; return cout << "NS"[sqrt(l * l + a * a + p * p) <= (r << 1)] << "\n", 0;
}
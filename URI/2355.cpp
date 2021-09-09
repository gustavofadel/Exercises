# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

ll n;

int main () {
  while (cin >> n && n) {
    cout << "Brasil " << (ll) floor(n / 90.0) << " x Alemanha " << (ll) ceil(7 * n / 90.0) << "\n";
  }
  
  return 0;
}
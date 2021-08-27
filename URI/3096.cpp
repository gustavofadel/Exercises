# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

ll n;

int main () {_
  cin >> n;
  
  cout << (n == 1 ? 1 : (ll) floor((n * log10(n / M_E) + log10(2 * M_PI * n) / 2.0)) + 1) << "\n";
  
  return 0;
}
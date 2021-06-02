# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

ll n;

int main () {_
  cin >> n;
  
  for (ll i = 1; i <= n; i++) {
    cout << (i * i) * ((i * i) - 1) / 2 - 4 * (i - 1) * (i - 2) << "\n";
  }
  
  return 0;
}
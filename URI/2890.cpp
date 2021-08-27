# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long
# define MOD 1000007

ll n;

int main () {_
  while (cin >> n && n) {
    cout << ((11 * n * n + n * n * n * n) / 12) % MOD << "\n";
  }
  
  return 0;
}
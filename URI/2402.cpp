# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

ll n;

bool is_prime (ll x) {
  if (x == 2) return true;
  if (!(x & 1)) return false;
  for (ll i = 3; i * i <= x; i += 2) if (x % i == 0) return false;
  return true;
}

int main () {_
  cin >> n; return cout << "SN"[n == 1 || is_prime(n)] << "\n", 0;
}
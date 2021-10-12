# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 32650;

int n;
vector<int> is_prime(MAXN, 1), primes;

int main () {_
  is_prime[0] = is_prime[1] = 0;
  
  for (int i = 2; i < MAXN; i++) if (is_prime[i]) { primes.push_back(i); for (int j = i * i; j < MAXN; is_prime[j] = 0, j += i); }
  
  while (cin >> n && n) {
    int res = 0;
    for (int i = 1; i <= n; res = (res + primes[n - i]) % i, i++);
    cout << res + 1 << "\n";
  }
  
  return 0;
}
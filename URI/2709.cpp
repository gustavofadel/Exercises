# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXM = 30;
const int MAXN = 1e4 + 10;

int is_prime[MAXN], m, n, v[MAXM];

int main () {_
  fill(is_prime, is_prime + MAXN, 1); is_prime[0] = is_prime[1] = 0;
  
  for (int i = 2; i < MAXN; i++) if (is_prime[i]) for (int j = i * i; j < MAXN; is_prime[j] = 0, j += i);
  
  while (cin >> m) {
    int sum = 0;
    for (int i = 0; i < m; cin >> v[i++]); cin >> n;
    for (int i = m - 1; i >= 0; sum += v[i], i -= n);
    cout << (is_prime[sum] ? "You’re a coastal aircraft, Robbie, a large silver aircraft." : "Bad boy! I’ll hit you.") << "\n";
  }
  
  return 0;
}
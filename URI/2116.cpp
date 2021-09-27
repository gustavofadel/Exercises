# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e3 + 10;

bool is_prime[MAXN];
int m, n;
vector<int> primes;

int main () {_
  memset(is_prime, true, sizeof(is_prime));
  
  is_prime[0] = is_prime[1] = false;
  
  for (int i = 2; i < MAXN; i++) {
    if (is_prime[i]) {
      primes.push_back(i);
      
      for (int j = i * i; j < MAXN; j += i) {
        is_prime[j] = false;
      }
    }
  }
  
  cin >> n >> m;
  
  int p1 = (is_prime[n] ? n : *--lower_bound(primes.begin(), primes.end(), n)); 
  int p2 = (is_prime[m] ? m : *--lower_bound(primes.begin(), primes.end(), m));
  
  return cout << p1 * p2 << "\n", 0;
}
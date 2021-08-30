# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e3 + 10;

int n;
vector<bool> is_prime(MAXN, true);

int main () {_
  is_prime[0] = is_prime[1] = false;
  
  for (int i = 2; i * i < MAXN; i++) {
    if (is_prime[i]) {
      for (int j = i * i; j < MAXN; j += i) {
        is_prime[j] = false;
      }
    }
  }
  
  cin >> n;
  
  int i = n;
  
  while (i > 2) {
    if (is_prime[i] && is_prime[i - 2]) {
      return cout << i - 2 << " " << i << "\n", 0;
    }
    
    i--;
  }
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 60102;

int d, h, n, sum;
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
  
  for (int cnt = 0, i = n; cnt < 10; i++) {
    if (is_prime[i]) {
      cnt++; sum += i;
    }
  }
  
  h = 60000000 / sum; d = h / 24;
  
  cout << sum << " km/h\n" << h << " h / " << d << " d\n";
  
  return 0;
}
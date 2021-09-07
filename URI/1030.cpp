# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int k, n, t;

int josephus (int n, int k) {
  if (n == 1) {
    return 0;
  }
  
  if (k == 1) {
    return n - 1;
  }
  
  if (k > n) {
    return (josephus(n - 1, k) + k) % n;
  }
  
  int cnt = n / k, res = josephus(n - cnt, k); 
  res -= n % k; res += (res < 0 ? n : res / (k - 1));
  
  return res;
}

int main () {_
  cin >> t;
  
  for (int tc = 1; tc <= t; cin >> n >> k, cout << "Case " << tc << ": " << josephus(n, k) + 1 << "\n", tc++);
  
  return 0;
}
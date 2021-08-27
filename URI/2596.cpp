# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int count_divisors (int n) {
  int cnt = 0;
  
  for (int i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      if (n / i == i) {
        cnt++;
      }
      
      else {
        cnt += 2;
      }
    }
  }
  
  return cnt;
}

int cnt, n, t;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> n; cnt = 0;
    
    for (int i = 1; i <= n; cnt += (count_divisors(i) % 2 ^ 1), i++);
    
    cout << cnt << "\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

const int MAXN = 50;

int n;
ll den, fib[MAXN], g, num;

int main () {_
  fib[0] = 0; fib[1] = 1;
  
  for (int i = 2; i < MAXN; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
  }
  
  while (cin >> n) {
    num = fib[n + 2]; den = 1ll << n; g = __gcd(num, den);
    cout << num / g << "/" << den / g << "\n";
  }
  
  return 0;
}
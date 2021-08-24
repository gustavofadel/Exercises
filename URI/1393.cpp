# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int fib[41], n;

int main () {_
  fib[0] = fib[1] = 1;
  
  for (int i = 2; i < 41; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
  }
  
  while (cin >> n && n) {
    cout << fib[n] << "\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int d[10] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};

int last_digit (int n) {
  if (n < 10) {
    return d[n];
  }
  
  if (((n / 10) % 10) % 2 == 0) {
    return (6 * last_digit(n / 5) * d[n % 10]) % 10;
  }
  
  else {
    return (4 * last_digit(n / 5) * d[n % 10]) % 10;
  }
}

int n, tc;

int main () {_
  while (cin >> n) {
    cout << "Instancia " << ++tc << "\n" << last_digit(n) << "\n\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, b, c;

int main () {_
  while (cin >> a >> b >> c && (a || b || c)) {
    cout << (int) pow(a * b * c, 1.0 / 3) << "\n";
  }
  
  return 0;
}
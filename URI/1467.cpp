# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, b, c;

int main () {_
  while (cin >> a >> b >> c) {
    cout << (char) ((a + b + c) % 3 == 0 ? '*' : 'A' + 2 * (a == b) + (a == c)) << "\n";
  }  

  return 0;
}
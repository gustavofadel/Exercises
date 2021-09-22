# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, b;

int main () {_
  while (cin >> a >> b && (a || b)) {
    cout << a - (b - a) << "\n";
  }
  
  return 0;
}
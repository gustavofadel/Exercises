# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, b, r;

int main () {_
  cin >> a >> b;
  
  r = a % abs(b); r += (r < 0 ? abs(b) : 0);

  cout << (a - r) / b << " " << r << "\n";
  
  return 0;
}
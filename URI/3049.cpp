# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int b, felix, marzia, t;

int main () {_
  cin >> b >> t; felix = (b + t) * 35; marzia = 70 * 160 - felix;
  cout << (felix == marzia ? 0 : (felix > marzia ? 1 : 2)) << "\n";
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ld long double

int tc;
ld x, y;

int main () {_
  cout << fixed << setprecision(2);
  
  while (cin >> x >> y) {
    cout << "Projeto " << ++tc << ":\n";
    cout << "Percentual dos juros da aplicacao: " << (y / x - 1) * 100 << " %\n\n";
  }
  
  return 0;
}
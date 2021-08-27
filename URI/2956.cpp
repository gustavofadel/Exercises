# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

double p, t;

int main () {_
  cin >> p >> t; cout << fixed << setprecision(5);
  cout << "Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = " << p * t / 2 << ".\n";
  
  return 0;
}
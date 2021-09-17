# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int la, lb, n, sa, sb;

int main () {_
  cin >> n >> la >> lb >> sa >> sb; cout << (la <= n && n <= lb && sa <= n && n <= sb ? "possivel" : "impossivel") << "\n"; 

  return 0;
}
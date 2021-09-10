# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int d, p, q;

int main () {_
  while (cin >> q && q) {
    cin >> d >> p; 
    
    int res = q * d * p / (p - q);
    
    cout << res << (res == 1 ? " pagina" : " paginas") << "\n";
  }
  
  return 0;
}
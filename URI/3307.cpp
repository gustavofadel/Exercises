# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

float r;
int a, t;

int main () {_
  cin >> t; cout << fixed << setprecision(2);
  
  while (t--) {
    cin >> a; r = sqrt(a / 12.56);
    
    if (r < 12) {
      cout << "vermelho = R$ " << 0.09 * a << "\n";
    }
    
    else if (12 <= r && r <= 15) {
      cout << "azul = R$ " << 0.07 * a << "\n";
    }
    
    else {
      cout << "amarelo = R$ " << 0.05 * a << "\n";
    }
  }
  
  return 0;
}
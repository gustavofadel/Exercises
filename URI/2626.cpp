# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string d, l, p;

int main () {_
  while (cin >> d >> l >> p) {
    if ((d == "pedra" && l == p && p == "tesoura") || (d == "papel" && l == p && p == "pedra") || (d == "tesoura" && l == p && p == "papel")) {
      cout << "Os atributos dos monstros vao ser inteligencia, sabedoria...\n";
    }
    
    else if ((l == "pedra" && d == p && p == "tesoura") || (l == "papel" && d == p && p == "pedra") || (l == "tesoura" && d == p && p == "papel")) {
      cout << "Iron Maiden's gonna get you, no matter how far!\n";
    }
    
    else if ((p == "pedra" && d == l && l == "tesoura") || (p == "papel" && d == l && l == "pedra") || (p == "tesoura" && d == l && l == "papel")) {
      cout << "Urano perdeu algo muito precioso...\n";
    }
    
    else {
      cout << "Putz vei, o Leo ta demorando muito pra jogar...\n";
    }
  }
  
  return 0;
}
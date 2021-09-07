# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

float sum;
int cnt, r, w1, w2;

int main () {_
  while (cin >> w1 >> w2 >> r && (w1 || w2 || r)) {
    float avg = ((w1 + w2) / 2.0) * (1 + r / 30.0); cnt++; sum += avg;
    
    if (1 <= avg && avg < 13) {
      cout << "Nao vai da nao\n";
    }
    
    else if (13 <= avg && avg < 14) {
      cout << "E 13\n";
    }
    
    else if (14 <= avg && avg < 40) {
      cout << "Bora, hora do show! BIIR!\n";
    }
    
    else if (40 <= avg && avg <= 60) {
      cout << "Ta saindo da jaula o monstro!\n";
    }
    
    else {
      cout << "AQUI E BODYBUILDER!!\n";
    }
  }
  
  if (sum / cnt > 40) {
    cout << "\nAqui nois constroi fibra rapaz! Nao e agua com musculo!\n";
  }
  
  return 0;
}
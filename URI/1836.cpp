# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int b, ev, iv, l, t;
string p, s[4] = {"HP", "AT", "DF", "SP"};

int main () {_
  cin >> t;
  
  for (int tc = 1; tc <= t; tc++) {
    int vet[4];
    
    cin >> p >> l;
    
    for (int i = 0; i < 4; i++) {
      cin >> b >> iv >> ev;
      vet[i] = (i ? (iv + b + sqrt(ev) / 8) * l / 50 + 5 : (iv + b + sqrt(ev) / 8 + 50) * l / 50 + 10);
    }
    
    cout << "Caso #" << tc << ": " << p << " nivel " << l << "\n";
    
    for (int i = 0; i < 4; cout << s[i] << ": " << vet[i++] << "\n");
  }
  
  return 0;
}
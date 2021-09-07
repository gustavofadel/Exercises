# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, b, c, vet[3];

int main () {_
  cin >> vet[0] >> vet[1] >> vet[2]; sort(vet, vet + 3, greater<int>());
  a = vet[0]; b = vet[1]; c = vet[2];
  
  if (a + b > c && b + c > a && c + a > b) {
    if (a * a == b * b + c * c) {
      cout << "r\n";
    }
    
    else if (a * a > b * b + c * c) {
      cout << "o\n";
    }
    
    else {
      cout << "a\n";
    }
  }
  
  else {
    cout << "n\n";
  }
  
  return 0;
}
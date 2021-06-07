# include <bits/stdc++.h>

using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int evens = 0, n, odds = 0, x;
  
  cin >> n;
  
  while (n--) {
    cin >> x;
    
    if (x % 2 == 0) {
      evens++;
    }
    
    else {
      odds++;
    }
  }
  
  cout << "Numeros pares: " << evens << "\n";
  cout << "Numeros impares: " << odds << "\n";
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, b, c, vet[3];

int main () {_
  while (cin >> vet[0] >> vet[1] >> vet[2]) {
    sort(vet, vet + 3, greater<int>()); a = vet[0]; b = vet[1]; c = vet[2];
    
    if (a * a == b * b + c * c) {
      if (__gcd(a, __gcd(b, c)) == 1) {
        cout << "tripla pitagorica primitiva\n";
      }
      
      else {
        cout << "tripla pitagorica\n";
      }
    }
    
    else {
      cout << "tripla\n";
    }
  }
  
  return 0;
}
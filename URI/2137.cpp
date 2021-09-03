# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;

int main () {_
  while (cin >> n) {
    string vet[n];
    
    for (int i = 0; i < n; i++) {
      cin >> vet[i];
    }
    
    sort(vet, vet + n);
    
    for (string s: vet) {
      cout << s << "\n";
    }
  }
  
  return 0;
}
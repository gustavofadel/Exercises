# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int vet[3];

int main () {_
  for (int i = 0; i < 3; cin >> vet[i++]); sort(vet, vet + 3); 
  return cout << vet[1] << "\n", 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int vet[4];

int main () {_
  for (int i = 0; i < 4; cin >> vet[i++]); sort(vet, vet + 4);
  
  return cout << abs((vet[0] + vet[3]) - (vet[1] + vet[2])) << "\n", 0;
}
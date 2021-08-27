# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

int n;
ll vet[18];

int main () {_
  vet[1] = 0; vet[2] = 1;
  
  for (int i = 3; i < 18; i++) {
    vet[i] = (i & 1 ? vet[i - 1] + vet[i - 2] : vet[i - 1] * vet[i - 2]);
  }
  
  while (cin >> n) {
    cout << vet[n] << "\n";
  }
  
  return 0;
}
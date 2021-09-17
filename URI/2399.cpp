# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 5e1 + 10;

int n, vet[MAXN];

int main () {_
  cin >> n; for (int i = 1; i <= n; cin >> vet[i++]); for (int i = 1; i <= n; cout << vet[i - 1] + vet[i] + vet[i++ + 1] << "\n");
  
  return 0;
}
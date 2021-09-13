# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 5e1 + 10;

int i, k, n, vet[MAXN];

int main () {_
  while (cin >> n && n) {
    for (i = 1; i <= n; cin >> vet[i++]); cin >> k;
    for (i = k; i != vet[i]; i = vet[i]); cout << i << "\n";
  }
  
  return 0;
}
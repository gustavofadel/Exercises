# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e3 + 10;

int m, n, vet[MAXN];

int main () {_
  while (cin >> n >> m) {
    for (int i = 0; i < n; cin >> vet[i++]); sort(vet, vet + n, greater<int>());
    cout << accumulate(vet, vet + m, 0) << "\n";
  }
  
  return 0;
}
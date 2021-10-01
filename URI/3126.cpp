# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e3 + 10;

int n, sum, vet[MAXN];

int main () {_
  cin >> n; for (int i = 0; i < n; cin >> vet[i], sum += vet[i++]);
  return cout << sum << "\n", 0;
}
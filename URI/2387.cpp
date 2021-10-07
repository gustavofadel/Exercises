# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e4 + 10;

int j, n, res = 1;
pair<int, int> vet[MAXN];

int main () {_
  cin >> n;
  
  for (int i = 0; i < n; cin >> vet[i].second >> vet[i++].first);
  
  sort(vet, vet + n);
  
  for (int i = 1; i < n; i++) if (vet[i].second >= vet[j].first) { j = i; res++; }
  
  return cout << res << "\n", 0;
}
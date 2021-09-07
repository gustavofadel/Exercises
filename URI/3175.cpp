# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int cur = 1, n, res = 1;

int main () {_
  cin >> n;
  
  int vet[n];
  
  for (int i = 0; i < n; cin >> vet[i], i++); sort(vet, vet + n);
  
  for (int i = 1; i < n; i++) {
    res += (vet[i] == vet[i - 1] ? cur : ++cur);
  }
  
  cout << res << "\n";
  
  return 0;
}
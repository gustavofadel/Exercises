# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int k, n;

int main () {_
  cin >> n >> k;
  
  vector<string> vet(n);
  
  for (int i = 0; i < n; cin >> vet[i++]);
  
  sort(vet.begin(), vet.end());
  
  return cout << vet[--k] << "\n", 0;
}
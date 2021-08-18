# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;

int main () {_
  while (cin >> n) {
    vector<pair<int, string>> vet(n);
    
    for (int i = 0; i < n; i++) {
      cin >> vet[i].second >> vet[i].first;
    }
    
    sort(vet.begin(), vet.end());
    
    for (int i = 0; i < n; i++) {
      cout << vet[i].second << " \n"[i == n - 1];
    }
  }
  
  return 0;
}
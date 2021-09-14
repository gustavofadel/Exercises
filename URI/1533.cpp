# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;

int main () {_
  while (cin >> n && n) {
    vector<pair<int, int>> vet(n);
    
    for (int i = 0; i < n; i++) {
      cin >> vet[i].first; vet[i].second = i + 1;
    }
    
    sort(vet.rbegin(), vet.rend());
    
    cout << vet[1].second << "\n";
  }
  
  return 0;
}
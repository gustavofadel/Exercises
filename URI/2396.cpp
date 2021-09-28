# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int m, n;
vector<pair<int, int>> vet;

int main () {_
  cin >> n >> m;
  
  for (int i = 1, t; i <= n; i++) {
    int sum = 0;
    
    for (int j = 0; j < m; j++) {
      cin >> t; sum += t;
    }
    
    vet.push_back({sum, i});
  }
  
  sort(vet.begin(), vet.end());
  
  for (int i = 0; i < 3; cout << vet[i++].second << "\n");
  
  return 0;
}
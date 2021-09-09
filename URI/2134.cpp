# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, tc;

bool cmp (pair<int, string> p1, pair<int, string> p2) {
  if (p1.first != p2.first) {
    return p1.first > p2.first;
  }
  
  return p1.second < p2.second;
}

int main () {_
  while (cin >> n) {
    vector<pair<int, string>> vet(n);
    
    for (int i = 0; i < n; cin >> vet[i].second >> vet[i].first, i++);
    
    sort(vet.begin(), vet.end(), cmp);
    
    cout << "Instancia " << ++tc << "\n" << vet.back().second << "\n\n";
  }
  
  return 0;
}
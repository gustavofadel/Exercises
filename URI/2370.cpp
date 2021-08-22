# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, t;

bool cmp (pair<int, string> p1, pair<int, string> p2) {
  return p1.first > p2.first;
}

int main () {_
  cin >> n >> t;
  
  vector<pair<int, string>> vet(n);
  vector<string> teams[t];
  
  for (int i = 0; i < n; i++) {
    cin >> vet[i].second >> vet[i].first;
  }
  
  sort(vet.begin(), vet.end(), cmp);
  
  for (int i = 0; i < n; i++) {
    teams[i % t].push_back(vet[i].second);
  }
  
  for (int i = 0; i < t; i++) {
    sort(teams[i].begin(), teams[i].end());
    
    cout << "Time " << i + 1 << "\n";
    
    for (string s: teams[i]) {
      cout << s << "\n";
    }
    
    cout << "\n";
  }
  
  return 0;
}
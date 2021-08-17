# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int pos, t;
string line, s;

bool cmp (pair<string, int> p1, pair<string, int> p2) {
  if (p1.first.size() != p2.first.size()) {
    return p1.first.size() > p2.first.size();
  }
  
  return p1.second < p2.second;
}

int main () {_
  cin >> t; cin.ignore();
  
  while (t--) {
    vector<pair<string, int>> v; pos = 0;
    
    getline(cin, line);
    
    stringstream ss(line);
    
    while (ss >> s) {
      v.push_back({s, pos++});
    }
    
    sort(v.begin(), v.end(), cmp);
    
    if (v.size() == 0) {
      cout << "\n"; continue;
    }
    
    for (int i = 0; i < v.size(); i++) {
      cout << v[i].first << " \n"[i == v.size() - 1];
    }
  }
  
  return 0;
}
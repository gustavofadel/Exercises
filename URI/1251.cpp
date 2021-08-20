# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool first = true;
string s;

bool cmp (pair<int, int> p1, pair<int, int> p2) {
  if (p1.second != p2.second) {
    return p1.second < p2.second;
  }
  
  return p1.first > p2.first;
}

int main () {_
  while (getline(cin, s)) {
    if (!first) {
      cout << "\n";
    }
    
    first = false;
    
    map<int, int> mp;
    vector<pair<int, int>> vet;
    
    for (int i = 0; i < s.size(); i++) {
      mp[s[i]]++;
    }
    
    for (auto [k, v]: mp) {
      vet.push_back({k, v});
    }
    
    sort(vet.begin(), vet.end(), cmp);
    
    for (auto p: vet) {
      cout << p.first << " " << p.second << "\n";
    }
  }
  
  return 0;
}
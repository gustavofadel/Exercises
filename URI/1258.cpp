# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool first = true;
char sz;
int n;
string color, name;

bool cmp (pair<string, pair<int, string>> p1, pair<string, pair<int, string>> p2) {
  if (p1.first != p2.first) {
    return p1.first < p2.first;
  }
  
  if (p1.second.first != p2.second.first) {
    return p1.second.first < p2.second.first;
  }
  
  return p1.second.second < p2.second.second;
}

int main () {_
  while (cin >> n && n) {
    if (!first) {
      cout << "\n";
    }
    
    vector<pair<string, pair<int, string>>> v;
    
    for (int i = 0; i < n; i++) {
      cin.ignore(); getline(cin, name); cin >> color >> sz;
      v.push_back({color, {(sz == 'P' ? 0 : (sz == 'M' ? 1 : 2)), name}});
    }
    
    sort(v.begin(), v.end(), cmp);
    
    for (auto p: v) {
      cout << p.first << " " << "PMG"[p.second.first] << " " << p.second.second << "\n";
    }
    
    first = false;
  }
  
  return 0;
}
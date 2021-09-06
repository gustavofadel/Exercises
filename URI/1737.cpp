# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;
string line;

bool cmp (pair<int, string> p1, pair<int, string> p2) {
  if (p1.first != p2.first) {
    return p1.first > p2.first;
  }
  
  return p1.second < p2.second;
}

int main () {_
  while (cin >> n && n) {
    int tot = 0;
    map<string, int> mp;
    string s = "";
    vector<pair<int, string>> vet;
    
    cin.ignore();
    
    while (n--) {
      getline(cin, line); s += line;
    }
    
    for (int i = 1; i < s.size(); i++) {
      mp[""s + s[i - 1] + s[i]]++;
    }
    
    for (auto [k, v]: mp) {
      tot += v; vet.push_back({v, k});
    }
    
    sort(vet.begin(), vet.end(), cmp);
    
    for (int i = 0; i < min((int) vet.size(), 5); i++) {
      cout << vet[i].second << " " << vet[i].first << " ";
      cout << fixed << setprecision(6) << (float) vet[i].first / tot << "\n";
    }
    
    cout << "\n";
  }
  
  return 0;
}
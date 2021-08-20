# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

map<string, int> mp;
string killer, killed;
vector<string> vet;

int main () {_
  while (cin >> killer >> killed) {
    if (mp[killer] != -1) {
      mp[killer]++;
    }
    
    mp[killed] = -1;
  }
  
  for (auto [k, v]: mp) {
    if (v != -1) {
      vet.push_back(k);
    }
  }
  
  sort(vet.begin(), vet.end());
  
  cout << "HALL OF MURDERERS\n";
  
  for (string s: vet) {
    cout << s << " " << mp[s] << "\n";
  }
  
  return 0;
}
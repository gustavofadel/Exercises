# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct Country {
  int gold = 0, silver = 0, bronze = 0;
};

map<string, Country> mp;
string gold, silver, bronze, modality;
vector<string> vet;

bool cmp (string s1, string s2) {
  if (mp[s1].gold != mp[s2].gold) {
    return mp[s1].gold > mp[s2].gold;
  }
  
  if (mp[s1].silver != mp[s2].silver) {
    return mp[s1].silver > mp[s2].silver;
  }
  
  if (mp[s1].bronze != mp[s2].bronze) {
    return mp[s1].bronze > mp[s2].bronze;
  }
  
  return s1 < s2;
}

int main () {_
  while (getline(cin, modality)) {
    getline(cin, gold); getline(cin, silver); getline(cin, bronze);
    mp[gold].gold++; mp[silver].silver++; mp[bronze].bronze++;
  }
  
  for (auto [k, v]: mp) {
    vet.push_back(k);
  }
  
  sort(vet.begin(), vet.end(), cmp);
  
  cout << "Quadro de Medalhas\n";
  
  for (auto s: vet) {
    cout << s << " " << mp[s].gold << " " << mp[s].silver << " " << mp[s].bronze << "\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct Person {
  bool wants;
  int first;
  string name;
};

int cnt;
map<string, pair<bool, int>> mp;
set<string> choose_yes, choose_no;
string name, op;
vector<Person> vet;

bool cmp (Person p1, Person p2) {
  if (p1.wants != p2.wants) {
    return p1.wants > p2.wants;
  }
  
  if (p1.name.size() != p2.name.size()) {
    return p1.name.size() > p2.name.size();
  }
  
  return p1.first < p2.first;
}

int main () {_
  while (cin >> name && name != "FIM") {
    cin >> op;
    
    if (!mp.count(name)) {
      mp[name] = {(op == "YES"), cnt++};
    }
  }
  
  for (auto [k, v]: mp) {
    (v.first ? choose_yes : choose_no).insert(k);
    
    if (v.first) {
      vet.push_back({v.first, v.second, k});
    }
  }
  
  sort(vet.begin(), vet.end(), cmp);
  
  for (auto s: choose_yes) {
    cout << s << "\n";
  } 
  
  for (auto s: choose_no) {
    cout << s << "\n";
  }
  
  cout << "\nAmigo do Habay:\n" << vet[0].name << "\n";
  
  return 0;
}
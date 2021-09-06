# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string s;
vector<string> vet;

string to_lower (string s) {
  transform(s.begin(), s.end(), s.begin(), ::tolower); return s;
} 

int main () {_
  while (getline(cin, s)) {
    vet.push_back(s);
  }
  
  sort(vet.begin(), vet.end(), [](const string &s1, const string &s2) {
    return to_lower(s1) < to_lower(s2);
  });
  
  cout << vet[vet.size() - 1] << "\n";
  
  return 0;
}
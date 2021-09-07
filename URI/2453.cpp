# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool first = true;
int pos;
string s;
vector<string> vet;

int main () {_
  getline(cin, s);
  
  while ((pos = s.find(' ')) != string::npos) {
    vet.push_back(s.substr(0, pos)); s.erase(0, pos + 1);
  }
  
  vet.push_back(s);
  
  for (string s: vet) {
    if (!first) {
      cout << " ";
    }
    
    first = false;
    
    for (int i = 1; i < s.size(); i += 2) {
      cout << s[i];
    }
  }
  
  cout << "\n";
  
  return 0;
}
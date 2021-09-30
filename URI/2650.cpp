# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, w;
string line, s;

bool is_number (string s) { return all_of(s.begin(), s.end(), ::isdigit); }

int main () {_
  cin >> n >> w; cin.ignore();
  
  while (n--) {
    bool first = true;
    string name;
    
    getline(cin, line);
    
    stringstream ss(line);
    
    while (ss >> s) {
      if (is_number(s) && stoi(s) > w) cout << name << "\n";
      else { 
        if (!first) name += " ";
        first = false; name += s;
      }
    }
  }
  
  return 0;
}
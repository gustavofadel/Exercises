# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t;
string s;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> s;
    
    if (s == "P=NP") {
      cout << "skipped\n";
    }
    
    else {
      cout << stoi(s.substr(0, s.find('+'))) + stoi(s.substr(s.find('+') + 1, 4)) << "\n";
    }
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t;
string s, words;

int main () {_
  cin >> t; cin.ignore();
  
  while (t--) {
    getline(cin, words);
    
    bool first = true;
    set<string> st;
    stringstream ss(words);
    
    while (ss >> s) {
      st.insert(s);
    }
    
    for (auto word: st) {
      if (!first) {
        cout << " ";
      }
      
      cout << word; first = false;
    }
    
    cout << "\n";
  }
  
  return 0;
}
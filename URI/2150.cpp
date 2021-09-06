# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string phrase, vowels;

int main () {_
  while (cin >> vowels) {
    int res = 0;
    
    cin.ignore(); getline(cin, phrase);
    
    for (char c: phrase) {
      res += (vowels.find(c) != string::npos); 
    }
    
    cout << res << "\n";
  }
  
  return 0;
}
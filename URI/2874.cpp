# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;
string s;

int main () {_
  while (cin >> n) {
    while (n--) {
      cin >> s; cout << (char) stoi(s, 0, 2);
    }
    
    cout << "\n";
  }
  
  return 0;
}
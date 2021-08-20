# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;
string s;

int main () {_
  cin >> n;
  
  while (n--) {
    cin >> s; sort(s.begin(), s.end());
    
    do {
      cout << s << "\n";
    } while (next_permutation(s.begin(), s.end()));
    
    cout << "\n";
  }
  
  return 0;
}
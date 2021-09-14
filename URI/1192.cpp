# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t;
string s;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> s;
    
    int a = s[0] - '0', b = s[2] - '0';
    
    if (a == b) {
      cout << b * a << "\n";
    }
    
    else {
      cout << (isupper(s[1]) ? b - a : b + a) << "\n";
    }
  }
  
  return 0;
}
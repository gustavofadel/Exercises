# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int digitsSum (string s) {
  int res = 0;
  
  for (char c: s) {
    res += (c - '0');
  }
  
  return res;
}

string s;

int main () {_
  while (getline(cin, s)) {
    int res = 0;
    
    for (char c: s) {
      if (isalpha(c)) {
        res += (tolower(c) - 'a') % 9 + 1;
      }
    }
    
    while (res >= 10) {
      res = digitsSum(to_string(res));
    }
    
    cout << res << "\n";
  }
  
  return 0;
}
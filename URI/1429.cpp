# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int fat[6], res;
string s;

int main () {_
  fat[0] = 1;
  
  for (int i = 1; i < 6; i++) {
    fat[i] = fat[i - 1] * i;
  }

  while (cin >> s && s != "0") {
    res = 0;
    
    for (int i = 0; i < s.size(); i++) {
      res += (s[i] - '0') * fat[s.size() - i];
    }
    
    cout << res << "\n";
  }
  
  return 0;
}
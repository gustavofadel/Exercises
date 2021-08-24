# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int res;
string s;

int main () {_
  cin >> s;
  
  for (int i = 0; i < s.size(); i++) {
    res = (res * 10 + (s[i] - '0')) % 3;
  }
  
  cout << res << "\n";
  
  return 0;
}
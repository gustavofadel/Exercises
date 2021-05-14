# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int current = 1, longest = 1;
string s;

int main () {_
  cin >> s;
  
  for (int i = 1; i < s.size(); i++) {
    if (s[i] == s[i - 1]) {
      current++;
    }
    
    else {
      longest = max(longest, current);
      current = 1;
    }
  }
  
  cout << max(longest, current) << "\n";
  
  return 0;
}
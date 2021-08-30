# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int cnt, n;
string s;

int main () {_
  cin >> n;
  
  while (n--) {
    cin >> s; cnt += (s.find("CD") == string::npos);
  }
  
  cout << cnt << "\n";
  
  return 0;
}
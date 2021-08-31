# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string s;

int main () {_
  getline(cin, s); cout << (s.size() <= 140 ? "TWEET" : "MUTE") << "\n";
  
  return 0;
}
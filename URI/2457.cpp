# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int cnt = 0, tot = 0;
string c, s, text;

int main () {_
  getline(cin, c); c = c.substr(0, 1); getline(cin, text);
  
  stringstream ss(text);

  while (ss >> s) {
    cnt += (s.find(c) != string::npos); tot++;
  }
  
  cout << fixed << setprecision(1) << (float) cnt / tot * 100 << "\n";

  return 0;
}
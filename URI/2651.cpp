# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string s;

int main () {_
  cin >> s; transform(s.begin(), s.end(), s.begin(), ::tolower);
  cout << (s.find("zelda") != string::npos ? "Link Bolado" : "Link Tranquilo") << "\n";
  
  return 0;
}
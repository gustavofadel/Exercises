# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

ll fat[16];
string s;

int main () {_
  fat[0] = 1;
  
  for (ll i = 1; i < 16; fat[i] = fat[i - 1] * i, i++);
  
  while (cin >> s && s != "0") {
    cout << fat[s.size()] << "\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string a, s;

int main () {_
  cin >> a >> s;
  
  for (char c: s) {
    cout << a[c - 'a'];
  }
  
  cout << "\n";
  
  return 0;
}
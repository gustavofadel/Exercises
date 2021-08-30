# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string s1, s2;

int main () {_
  cin >> s1 >> s2; cout << (s1.size() >= s2.size() ? "go" : "no") << "\n";
  
  return 0;
}
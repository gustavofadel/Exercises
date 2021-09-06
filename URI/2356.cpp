# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string d, s;

int main () {_
  while (cin >> d >> s) {
    cout << (d.find(s) != string::npos ? "Resistente" : "Nao resistente") << "\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string n;

int main () {_
  cin >> n; cout << n << (n.find("13") == string::npos ? " NO es de Mala Suerte" : " es de Mala Suerte") << "\n";
  
  return 0;
}
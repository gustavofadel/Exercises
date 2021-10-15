# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;

int main () {_
  while (cin >> n && ~n) cout << (n % 193 ? "So o ouro" : "Bom") << "\n"; 
  
  return 0;
}
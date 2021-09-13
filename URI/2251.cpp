# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, tc;

int main () {_
  while (cin >> n && n) {
    cout << "Teste " << ++tc << "\n" << (1 << n) - 1 << "\n\n";
  }
  
  return 0;
}
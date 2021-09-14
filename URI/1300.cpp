# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a;

int main () {_
  while (cin >> a) {
    cout << "NY"[a % 6 == 0] << "\n";
  }
  
  return 0;
}
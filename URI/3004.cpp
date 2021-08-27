# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int wd, hd, wp, hp, t;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> wd >> hd >> wp >> hp; cout << (min(wd, hd) < min(wp, hp) && max(wd, hd) < max(wp, hp) ? "S" : "N") << "\n";
  }
  
  return 0;
}
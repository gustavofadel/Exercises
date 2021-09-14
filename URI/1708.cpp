# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int x, y;

int main () {_
  cin >> x >> y; cout << (int) ceil((float) y / (y - x)) << "\n";
  
  return 0;
}
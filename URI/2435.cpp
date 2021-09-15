# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int d1, d2, n1, n2, v1, v2;

int main () {_
  cin >> n1 >> d1 >> v1 >> n2 >> d2 >> v2;
  
  cout << ((float) d1 / v1 < (float) d2 / v2 ? n1 : n2) << "\n";

  return 0;
}
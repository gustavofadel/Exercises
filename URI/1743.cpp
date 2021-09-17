# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool compatible = true;
int x[5], y[5];

int main () {_
  for (int i = 0; i < 5; cin >> x[i++]);
  for (int i = 0; i < 5; cin >> y[i], compatible &= (x[i] != y[i++]));
  
  cout << "NY"[compatible] << "\n";

  return 0;
}
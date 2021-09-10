# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

char c;
double res = 1;
int n;

int main () {_
  cin >> n;
  
  for (int i = 0, x; i < n; cin >> x >> c, (c == '/' ? res /= x : res *= x), i++);
  
  cout << fixed << setprecision(0) << res << "\n";
  
  return 0;
}
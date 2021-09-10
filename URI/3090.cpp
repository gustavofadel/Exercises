# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

ll a, b, h, m, n, s, x, y;

int main () {_
  cin >> n >> m >> s;
  
  for (int i = 0; i < s; cin >> x >> y >> h, (x < y * (double) n / m ? a : b) += h, i++);
  
  cout << a << " " << b << "\n";
  
  return 0;
}
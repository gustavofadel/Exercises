# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

double a, b, c, d, res;
int t;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> a >> b >> c >> d; res = (d - b) / (c - a);
    cout << (int) res << ",";
    cout << setw(2) << setfill('0') << trunc(100 * (res - int(res))) << "\n";
  }
  
  return 0;
}
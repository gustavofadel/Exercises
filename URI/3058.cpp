# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

float p, res = FLT_MAX;
int g, n;

int main () {_
  cin >> n;
  
  while (n--) {
    cin >> p >> g; res = min(res, p / g * 1000);
  }
  
  cout << fixed << setprecision(2) << res << "\n";
  
  return 0;
}
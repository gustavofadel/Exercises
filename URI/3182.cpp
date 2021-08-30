# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

int a, b, h, n, p, res = -1, w;

int main () {_
  cin >> n >> b >> h >> w;
  
  for (int i = 0; i < h; i++) {
    cin >> p;
    
    for (int j = 0; j < w; j++) {
      cin >> a;
      
      if (a >= n && p * n <= b) {
        res = (~res ? min(res, p * n) : p * n);
      }
    }
  }
  
  if (~res) {
    cout << res << "\n";
  }
  
  else {
    cout << "stay home\n";
  }
  
  return 0;
}
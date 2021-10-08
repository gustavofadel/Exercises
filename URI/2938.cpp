# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int c, n, p, res, v;

int main () {_
  cin >> p >> c >> n;
  
  int j = p + c;
  
  for (int i = 0; i < n; i++) {
    cin >> v;
    
    if (v < j) {
      j -= (j - v);
      if (j < p) break;
      if (i) res++;
    }
  }
  
  return cout << res << "\n", 0;
}
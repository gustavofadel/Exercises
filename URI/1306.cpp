# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, r, res, tc;

int main () {_
  while (cin >> r >> n && (r || n)) {
    cout << "Case " << ++tc << ": "; res = ceil((float) max(r - n, 0) / n);
    
    if (res > 26) {
      cout << "impossible\n";
    }
    
    else {
      cout << res << "\n";
    }
  } 
  
  return 0;
}
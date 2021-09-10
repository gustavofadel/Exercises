# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 5e4 + 10;

int a[MAXN], cur, n, res;

int main () {_
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    
    if (i == 0) {
      cur = res = a[i];
    }
    
    else {
      cur = max(a[i], cur + a[i]); res = max(res, cur);
    }
  }
  
  cout << res << "\n";
  
  return 0;
}
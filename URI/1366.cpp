# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int c, n, v;

int main () {_
  while (cin >> n && n) {
    int tot = 0;
    
    for (int i = 0; i < n; cin >> c >> v, tot += (v - (v & 1)), i++);
    
    cout << tot / 4 << "\n";
  }
  
  return 0;
}
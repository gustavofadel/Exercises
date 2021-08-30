# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int k, n, o, res;

int main () {_
  cin >> n;
  
  while (n--) {
    cin >> k; res = 0;
    
    for (int i = 0; i < k; i++) {
      cin >> o; res += (i ? o - 1 : o);
    }
    
    cout << res << "\n";
  }
  
  return 0;
}
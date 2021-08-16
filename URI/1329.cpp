# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e5 + 10;

int j, m, n, r[MAXN];

int main () {_
  while (cin >> n && n) {
    j = m = 0;
    
    for (int i = 0; i < n; i++) {
      cin >> r[i]; m += (r[i] == 0); j += (r[i] == 1);
    }
    
    cout << "Mary won " << m << " times and John won " << j << " times\n";
  }
  
  return 0;
}
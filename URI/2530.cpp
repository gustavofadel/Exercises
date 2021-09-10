# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int m, n;

int main () {_
  while (cin >> n >> m) {
    int i, j, r[m], s[n];
    
    for (i = 0; i < n; cin >> s[i], i++); for (i = 0; i < m; cin >> r[i], i++);
    for (i = 0, j = 0; i < n && j < m; j += (r[j] == s[i++]));
    
    cout << (j == m ? "sim" : "nao") << "\n";
  }
  
  return 0;
}
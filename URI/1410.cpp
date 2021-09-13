# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, d;

int main () {_
  while (cin >> a >> d && (a || d)) {
    bool exists = false;
    int b[a], c[d];
    
    for (int i = 0; i < a; cin >> b[i++]); for (int i = 0; i < d; cin >> c[i++]);
    
    sort(b, b + a); sort(c, c + d);
    
    for (int i = 0; i < a && !exists; exists |= (b[i++] < c[1]));
    
    cout << "NY"[exists] << "\n";
  }
  
  return 0;
}
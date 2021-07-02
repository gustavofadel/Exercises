# include <bits/stdc++.h>
 
using namespace std;
 
# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
const int MAXN = 1e2 + 10;
 
int a[MAXN], n, t[MAXN];
 
int main () {_
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> t[i];
    
    if (i) {
      if (a[i] - t[i] != a[i - 1] - t[i - 1]) {
        return cout << "mentiu a idade\n", 0;
      }
    }
  }
  
  return cout << "idades corretas\n", 0;
}
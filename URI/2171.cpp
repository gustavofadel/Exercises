# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;

int main () {_
  while (cin >> n && n) {
    int fink = 0;
    
    for (int i = 1; fink + i <= n; i++) {
      fink += i;
    }
    
    cout << fink << " " << n - fink << "\n";
  }
  
  return 0;
}
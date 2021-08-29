# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;

int main () {_
  while (cin >> n && n) {
    cout << 1;
    
    for (int i = 2; i * i <= n; i++) {
      cout << " " << i * i;
    }
    
    cout << "\n";
  }
  
  return 0;
}
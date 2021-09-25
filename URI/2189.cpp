# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, tc, winner, x;

int main () {_
  while (cin >> n && n) {
    for (int i = 1; i <= n; i++) {
      cin >> x;
      
      if (i == x) {
        winner = i;
      }
    }
    
    cout << "Teste " << ++tc << "\n" << winner << "\n\n";
  }
  
  return 0;
}
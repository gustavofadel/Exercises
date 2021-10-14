# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int m, n, x;
pair<int, int> ash, pikachu;

int main () {_
  while (cin >> n >> m) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> x;
        if (x == 1) ash = {i, j};
        if (x == 2) pikachu = {i, j};
      }
    }
    
    cout << abs(ash.first - pikachu.first) + abs(ash.second - pikachu.second) << "\n";
  }
  
  return 0;
}
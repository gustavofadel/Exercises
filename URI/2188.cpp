# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, tc, u, v, x, y;

int main () {_
  while (cin >> n && n) {
    pair<int, int> upper_left(INT_MIN, INT_MAX), lower_right(INT_MAX, INT_MIN);
    
    while (n--) {
      cin >> x >> y >> u >> v;
      upper_left = {max(upper_left.first, x), min(upper_left.second, y)};
      lower_right = {min(lower_right.first, u), max(lower_right.second, v)};
    }
    
    cout << "Teste " << ++tc << "\n";
    
    if (upper_left.first <= lower_right.first && lower_right.second <= upper_left.second) {
      cout << upper_left.first << " " << upper_left.second << " " << lower_right.first << " " << lower_right.second << "\n\n";
    }
    
    else {
      cout << "nenhum\n\n";
    }
  }
  
  return 0;
}
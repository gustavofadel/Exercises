# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 2e5 + 10;

int a[MAXN], n, x;
map<int, int> positions;

int main () {_
  cin >> n >> x;
  
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    
    if (a[i] < x) {
      auto position = positions.find(x - a[i]);
      
      if (position != positions.end()) {
        return cout << position->second << " " << i << "\n", 0;
      }
      
      positions[a[i]] = i;
    }
  }
  
  return cout << "IMPOSSIBLE\n", 0;
}
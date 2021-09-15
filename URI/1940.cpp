# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 5e2 + 10;

int cur = -1, n, m, pos, pts[MAXN];

int main () {_
  cin >> n >> m;
  
  for (int i = 0; i < m; i++) for (int j = 0, x; j < n; cin >> x, pts[j++] += x);
  
  for (int i = 0; i < n; i++) {
    if (pts[i] >= cur) {
      cur = pts[i]; pos = i + 1;
    }
  }
  
  cout << pos << "\n";
  
  return 0;
}
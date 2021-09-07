# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e5 + 10;

int cnt, n, res;
pair<int, int> a[MAXN];

int main () {_
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
  }
  
  for (int i = 0; i < n; i++) {
    cnt = 0;
    
    for (int j = 0; j < n; j++) {
      if (i != j) {
        cnt += (abs(a[i].first - a[j].first) == abs(a[i].second - a[j].second));
      }
    }
    
    res += (cnt == 0);
  }
  
  cout << res << "\n";
  
  return 0;
}
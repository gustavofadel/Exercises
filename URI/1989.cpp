# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ull unsigned long long

const int MAXN = 1e5 + 10;

int n;
ull c[MAXN], m, pref[MAXN];

int main () {_
  while (cin >> n >> m && ~n && ~m) {
    ull sum = 0; pref[0] = 0;
    
    for (int i = 1; i <= n; i++) {
      cin >> c[i]; pref[i] = pref[i - 1] + m * c[i]; sum += pref[i];
    }
    
    cout << sum << "\n";
  }
  
  return 0;
}
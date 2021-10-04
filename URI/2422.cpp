# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e5 + 10;

int c[MAXN], k, n;

int main () {_
  cin >> n; for (int i = 0; i < n; cin >> c[i++]); cin >> k;
  
  for (int i = 0; i < n; i++) {
    if (binary_search(c, c + n, k - c[i])) return cout << c[i] << " " << k - c[i] << "\n", 0;
  }
}
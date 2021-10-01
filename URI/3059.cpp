# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e3 + 10;

int l, n, r, vet[MAXN];
set<pair<int, int>> st;

int main () {_
  cin >> n >> l >> r; for (int i = 0; i < n; cin >> vet[i++]);
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) continue;
      int a = vet[i], b = vet[j];
      if (l <= a + b && a + b <= r) st.insert({min(a, b), max(a, b)});
    }
  }
  
  return cout << st.size() << "\n", 0;
}
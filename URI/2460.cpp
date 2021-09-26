# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXID = 1e5 + 10;
const int MAXN = 5e4 + 10;

bool first = true;
int m, mark[MAXID], n, vet[MAXN], x;

int main () {_
  cin >> n; for (int i = 0; i < n; cin >> vet[i], mark[vet[i++]] = 1);
  cin >> m; for (int i = 0; i < m; cin >> x, mark[x] = 0, i++);
  
  for (int i = 0; i < n; i++) {
    if (mark[vet[i]]) {
      if (!first) cout << " ";
      first = false; cout << vet[i];
    }
  }
  
  cout << "\n";
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

const int MAXN = 1e5 + 10;

int n;
ll vet[MAXN];

int main () {_
  while (cin >> n && n) {
    ll res = 0;
    
    for (int i = 0; i < n; i++) {
      cin >> vet[i]; res ^= vet[i];
    }
    
    cout << res << "\n";
  }
  
  return 0;
}
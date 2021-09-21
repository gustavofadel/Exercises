# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

ll pontos (int x) {
  if (x == 0) return 2;
  return 2 * pontos(x - 1) - 1;
}

int n;
ll res;

int main () {_
  cin >> n; res = pontos(n); cout << res * res << "\n";
  
  return 0;
}
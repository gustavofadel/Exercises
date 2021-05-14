# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long
# define MAXN 200010

int n;
ll moves, x[MAXN];

int main () {_
  cin >> n;
  
  for (int i = 1; i <= n; i++) {
    cin >> x[i];
  }
  
  for (int i = 2; i <= n; i++) {
    if (x[i] < x[i - 1]) {
      moves += x[i - 1] - x[i];
      x[i] = x[i - 1];
    }
  }
  
  cout << moves << "\n";
  
  return 0;
}
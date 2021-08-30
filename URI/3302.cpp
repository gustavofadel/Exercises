# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, x;

int main () {_
  cin >> n;
  
  for (int i = 1; i <= n; i++) {
    cin >> x; cout << "resposta " << i << ": " << x << "\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

int m, n;
ll fat[21];

int main () {_
  fat[0] = 1;
  
  for (ll i = 1; i < 21; i++) {
    fat[i] = fat[i - 1] * i;
  }
  
  while (cin >> m >> n) {
    cout << fat[m] + fat[n] << "\n";
  }
  
  return 0;
}
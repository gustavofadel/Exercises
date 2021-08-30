# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

const int MAXN = 1e5 + 10;
const ll MOD = 1e9 + 7;

int n;
ll possibilities[MAXN];

int main () {_
  cin >> n;
  
  possibilities[1] = 0; possibilities[2] = possibilities[3] = 1;
  
  for (int i = 4; i < n; i++) {
    possibilities[i] = (possibilities[i - 2] + possibilities[i - 3]) % MOD;
  }
  
  cout << possibilities[n - 1] << "\n";
  
  return 0;
}
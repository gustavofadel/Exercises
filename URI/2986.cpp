# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

const int MAXN = 1e5 + 10;
const ll MOD = 1e9 + 7;

int n;
ll ways[MAXN];

int main () {_
  cin >> n;

  ways[0] = ways[1] = 1; ways[2] = 2;
  
  for (int i = 3; i <= n; i++) {
    ways[i] = (ways[i - 1] + ways[i - 2] + ways[i - 3]) % MOD;
  }
  
  cout << ways[n] << "\n";
  
  return 0;
}
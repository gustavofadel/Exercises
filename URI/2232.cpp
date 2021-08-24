# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

int n, t;
ll sum[32];

int main () {_
  sum[0] = 1;
  
  for (ll i = 1; i < 32; i++) {
    sum[i] = sum[i - 1] + pow(2, i);
  }
  
  cin >> t;
  
  while (t--) {
    cin >> n; cout << sum[n - 1] << "\n";
  }
  
  return 0;
}
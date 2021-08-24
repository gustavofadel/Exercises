# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

int t;
ll n;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> n; cout << ((ll) sqrt(1 + 8 * n) - 1) / 2 << "\n";
  } 
  
  return 0;
}
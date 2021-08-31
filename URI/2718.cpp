# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

int t;
ll n;

int main () {_
  cin >> t;
  
  while (t--) {
    int cnt = 0;
    
    cin >> n;
    
    while (n) {
      n = (n & (n << 1)); cnt++;
    }
    
    cout << cnt << "\n";
  }
  
  return 0;
}
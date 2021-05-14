# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

int main () {_
  ll n;
  
  cin >> n;
  
  while (true) {
    cout << n;
    
    if (n == 1) {
      cout << "\n";
      break;
    }
    
    else {
      cout << " ";
    }
    
    if (n & 1) {
      n = 3 * n + 1;
    }
    
    else {
      n >>= 1;
    }
  }
  
  return 0;
}
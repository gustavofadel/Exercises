# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ull unsigned long long

ull x, y;

int main () {_
  while (cin >> x >> y && (x || y)) {
    ull count = 0, result = x ^ y;
    
    while (result) { count += result & 1; result >>= 1; }
    
    cout << count << "\n";
  }
  
  return 0;
}
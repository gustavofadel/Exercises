# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

float c;
int t;

int main () {_
  cin >> t;
  
  while (t--) {
    int res = 0;
    
    cin >> c;
    
    for (; c > 1; c /= 2, res++);
    
    cout << res << " dias\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

float cur;
int c, d, n, res;

int main () {_
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    cin >> d >> c;
    
    if (c * log(d) > cur) { cur = c * log(d); res = i; }
  }
  
  return cout << res << "\n", 0;
}
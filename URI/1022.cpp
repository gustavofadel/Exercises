# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

char ch, op;
int d, g, n, n1, d1, n2, d2, t;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> n1 >> ch >> d1 >> op >> n2 >> ch >> d2;
    
    if (op == '+') {
      n = (n1 * d2 + n2 * d1); d = (d1 * d2);
    }
    
    else if (op == '-') {
      n = (n1 * d2 - n2 * d1); d = (d1 * d2);
    }
    
    else if (op == '*') {
      n = (n1 * n2); d = (d1 * d2);
    }
    
    else {
      n = (n1 * d2); d = (n2 * d1);
    }
    
    g = __gcd(n, d);
    
    if (g < 0) {
      g *= -1;
    }
    
    cout << n << "/" << d << " = " << n / g << "/" << d / g << "\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

char ch, op;
int a, b, c, t;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> a >> op >> b >> ch >> c;
    
    int res = (op != '+' ? op != '-' ? a * b : a - b : a + b);
    
    cout << "E"; for (int i = 0; i < abs(res - c); cout << "r", i++); cout << "ou!\n";
  }
  
  return 0;
}
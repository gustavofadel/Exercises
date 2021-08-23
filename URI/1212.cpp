# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string a, b;

int main () {_
  while (cin >> a >> b && (a != "0" || b != "0")) {
    int carry = 0, cnt = 0, i = a.size() - 1, j = b.size() - 1;
    
    while (~i || ~j) {
      int x = (~i ? (a[i--] - '0') : 0), y = (~j ? (b[j--] - '0') : 0), sum = x + y + carry;
      carry = (sum >= 10); cnt += carry;
    }
    
    if (cnt == 0) {
      cout << "No carry operation.\n";
    }
    
    else if (cnt == 1) {
      cout << "1 carry operation.\n";
    }
    
    else {
      cout << cnt << " carry operations.\n";
    }
  }
  
  return 0;
}
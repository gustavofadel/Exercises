# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int carry, diff, m, n;
string a, b, c;

int main () {_
  cin >> a >> b;
  
  if (a.size() > b.size()) {
    swap(a, b);
  }
  
  n = a.size(); m = b.size(); diff = m - n;
  
  for (int i = n - 1; ~i; i--) {
    int sum = (a[i] - '0') + (b[i + diff] - '0') + carry;
    c += (sum % 10 + '0'); carry = sum / 10;
  }
  
  for (int i = m - n - 1; ~i; i--) {
    int sum = (b[i] - '0') + carry;
    c += (sum % 10 + '0'); carry = sum / 10;
  }
  
  if (carry) c += (carry + '0');
  
  reverse(c.begin(), c.end());
  
  cout << c << "\n";
  
  return 0;
}
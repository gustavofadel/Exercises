# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string m, n;

int digits_sum (string n) {
  int res = 0;
  
  for (int i = 0; i < n.size(); res += n[i] - '0', i++);
  
  return res;
}

int one_digit_number (string n) {
  while (n.size() > 1) {
    n = to_string(digits_sum(n));
  }
  
  return stoi(n);
}

int main () {_
  while (cin >> n >> m && (n != "0" || m != "0")) {
    int a = one_digit_number(n), b = one_digit_number(m);
    cout << (a == b ? 0 : (a > b ? 1 : 2)) << "\n";
  }
  
  return 0;
}
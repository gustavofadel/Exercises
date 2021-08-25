# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ull unsigned long long

char get_digit (int d) {
  return (0 <= d && d <= 9 ? ('0' + d) : ('A' + d - 10));
}

void to_base_32 (ull n) {
  string s;
  
  while (n) {
    s += get_digit(n % 32); n /= 32;
  }
  
  reverse(s.begin(), s.end()); cout << s << "\n";
}

ull n;

int main () {_
  while (cin >> n && n) {
    to_base_32(n);
  }
  
  return cout << "0\n", 0;
}
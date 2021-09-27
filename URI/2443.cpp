# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, b, c, d, den, g, num;

int main () {_
  cin >> a >> b >> c >> d; den = b * d; num = den / b * a + den / d * c; g = __gcd(num, den); 
  return cout << num / g << " " << den / g << "\n", 0;
}
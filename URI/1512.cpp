# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

ll a, b, n;

int main () {_
  while (cin >> n >> a >> b && (n || a || b)) {
    cout << n / a + n / b - n / (a * b / __gcd(a, b)) << "\n";
  }
  
  return 0;
}
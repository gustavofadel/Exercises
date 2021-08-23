# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

ll a, b;

int main () {_
  cin >> a >> b; cout << (a + b) * (b - a + 1) / 2 << "\n";
  
  return 0;
}
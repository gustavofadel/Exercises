# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

ll a, b;

int main () {_
  while (cin >> a >> b) {
    cout << llabs(a - b) << "\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, b;

int main () {_
  cin >> a >> b;
  
  if (a > b) {
    swap(a, b);
  }
  
  if (a >= 6 && b >= 6 && ((a >= 18 || b >= 18) || (a >= 14 && b >= 14))) {
    cout << "YES\n";
  }
  
  else {
    cout << "NO\n";
  }
  
  return 0;
}
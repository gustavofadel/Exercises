# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, zeros;

int main () {_
  cin >> n;
  
  for (int i = 5; n / i >= 1; i *= 5) {
    zeros += n / i;
  }
  
  cout << zeros << "\n";
  
  return 0;
}
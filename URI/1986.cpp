# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, x;

int main () {_
  cin >> n;
  
  while (n--) { cin >> hex >> x; cout << (char) x; }
  
  return cout << "\n", 0;
}
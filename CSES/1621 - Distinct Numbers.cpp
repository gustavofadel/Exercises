# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, x;
set<int> distinct;

int main () {_
  cin >> n;
  
  while (n--) {
    cin >> x;
    distinct.insert(x);
  }
  
  cout << distinct.size() << "\n";
  
  return 0;
}
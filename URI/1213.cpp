# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;

int main () {_
  while (cin >> n) {
    int cnt = 1, rem = n;
    
    while (rem) {
      cnt++; rem = (rem * 10 + 1) % n;
    }
    
    cout << cnt - 1 << "\n";
  }
  
  return 0;
}
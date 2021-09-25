# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, t;

int main () {_
  while (cin >> n && n) {
    bitset<1011> bs;
    
    for (int i = 0; i < n; i++) {
      cin >> t;
      
      for (int j = t; j < t + 10; j++) {
        bs[j] = 1;
      }
    }
    
    cout << bs.count() << "\n";
  }
  
  return 0;
}
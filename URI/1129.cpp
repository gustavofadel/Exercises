# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a[5], n;

int main () {_
  while (cin >> n && n) {
    while (n--) {
      vector<int> res;
      
      for (int i = 0; i < 5; i++) {
        cin >> a[i];
        
        if (a[i] <= 127) {
          res.push_back(i);
        }
      }
      
      if (res.size() == 1) {
        cout << (char) ('A' + res[0]) << "\n";
      }
      
      else {
        cout << "*\n";
      }
    }
  }
  
  return 0;
}
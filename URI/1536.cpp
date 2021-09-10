# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

char x;
int a_m, a_v, b_m, b_v, t;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> a_m >> x >> b_v >> b_m >> x >> a_v;
    
    if (a_m + a_v > b_m + b_v) {
      cout << "Time 1\n";
    }
    
    else if (b_m + b_v > a_m + a_v) {
      cout << "Time 2\n";
    }
    
    else {
      if (a_v > b_v) {
        cout << "Time 1\n";
      }
      
      else if (b_v > a_v) {
        cout << "Time 2\n";
      }
      
      else {
        cout << "Penaltis\n";
      }
    }
  }
  
  return 0;
}
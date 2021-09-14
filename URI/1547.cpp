# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, s, qt, v;

int main () {_
  cin >> n;
  
  while (n--) {
    int diff = INT_MAX, pos = -1;
    
    cin >> qt >> s;
    
    for (int i = 1; i <= qt; i++) {
      cin >> v;
      
      if (abs(v - s) < diff) {
        diff = abs(v - s); pos = i;
      }
    }
    
    cout << pos << "\n";
  }
  
  return 0;
}
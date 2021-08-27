# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, p;

int main () {_
  while (cin >> n && ~n) {
    int cnt = 0, sum = 0;
    
    while (n--) {
      cin >> p; sum += p; cnt += (sum % 100 == 0);
    }
    
    cout << cnt << "\n";
  }
  
  return 0;
}
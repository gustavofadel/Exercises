# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, b, n, tc;
string even, odd;

int main () {_
  while (cin >> n && n) {
    cin >> even >> odd; cout << "Teste " << ++tc << "\n";
    
    while (n--) {
      cin >> a >> b; cout << ((a + b) & 1 ? odd : even) << "\n";
    }
    
    cout << "\n";
  }
  
  return 0;
}
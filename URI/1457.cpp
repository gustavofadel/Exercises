# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

int t;
ll fat, n, k, x;
string aux, s;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> s; aux = ""; k = 0; x = 1;
    
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '!') {
        k++;
      }
      
      else {
        aux += s[i];
      }
    }
    
    fat = n = stoll(aux);
    
    while (n - x * k >= 1) {
      fat *= n - x++ * k;
    }
    
    cout << fat << "\n";
  }
  
  return 0;
}
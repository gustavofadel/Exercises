# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int c, d, t;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> c >> d;
    
    int res = 1, vet[c + d];
    
    for (int i = 0; i < c; vet[i++] = 26); for (int i = c; i < c + d; vet[i++] = 10);
    for (int i = 0; i < c + d; res *= vet[i++]);
    
    cout << (res == 1 ? 0 : res) << "\n";
  }
  
  return 0;
}
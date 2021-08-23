# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, t;

int main () {_
  cin >> t;
  
  for (int tc = 1; tc <= t; tc++) {
    cin >> n;
    
    int vet[n];
    
    for (int i = 0; i < n; i++) {
      cin >> vet[i];
    }
    
    cout << "Case " << tc << ": " << vet[n / 2] << "\n";
  }
  
  return 0;
}
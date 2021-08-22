# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, t;

int main () {_
  cin >> t; cout << fixed << setprecision(3);
  
  while (t--) {
    cin >> n;
    
    float avg = 0;
    int cnt = 0, vet[n];
    
    for (int i = 0; i < n; i++) {
      cin >> vet[i]; avg += vet[i];
    }
    
    sort(vet, vet + n, greater<int>()); avg /= (float) n;
    
    for (int i = 0; i < n && vet[i] > avg; cnt++, i++);
    
    cout << (float) cnt / n * 100 << "%\n";
  }
  
  return 0;
}
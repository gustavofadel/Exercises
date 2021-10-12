# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e4 + 10;

int n, vet[MAXN];

int main () {_
  while (cin >> n) {
    int res = 0, sum = 0;
    
    for (int i = 0; i < n; cin >> vet[i], sum += vet[i++]);
    
    if (sum % n) { cout << -1 << "\n"; continue; }
    
    for (int i = 0; i < n; res += abs(sum / n - vet[i++]));
    
    cout << (res >> 1) + 1 << "\n";
  }
  
  return 0;
}
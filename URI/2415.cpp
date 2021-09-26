# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e4 + 10;

int freq = 1, n, res = 1, vet[MAXN];

int main () {_
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    cin >> vet[i];
    
    if (i) {
      freq = (vet[i] == vet[i - 1] ? freq + 1 : 1);
    }
    
    res = max(res, freq);
  }
  
  return cout << res << "\n", 0;
}
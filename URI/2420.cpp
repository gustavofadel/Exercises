# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e5 + 10;

int a[MAXN], dir, esq, k, n;

int main () {_
  cin >> n; k = n / 2;
  
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    
    if (i < k) {
      esq += a[i];
    }
    
    else {
      dir += a[i];
    }
  }
  
  while (esq != dir) {
    if (esq > dir) {
      esq -= a[--k]; dir += a[k];
    }
    
    else {
      esq += a[k]; dir -= a[k++];
    }
  }
  
  return cout << k << "\n", 0;
}
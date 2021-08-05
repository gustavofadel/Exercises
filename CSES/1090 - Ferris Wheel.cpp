# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main () {_
  int n, x;
  
  cin >> n >> x;
  
  int p[n];
  
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  
  sort(p, p + n);
  
  int count = n, i = 0, j = n - 1;
  
  while (i < j) {
    if (p[i] + p[j] <= x) {
      count--; i++; j--;
    }
    
    else {
      j--;
    }
  }
  
  cout << count << "\n";
  
  return 0;
}
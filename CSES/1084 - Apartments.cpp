# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main () {_
  int n, m, k;
  
  cin >> n >> m >> k;
  
  int a[n], b[m];
  
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  } 
  
  sort(a, a + n);
  sort(b, b + m);
  
  int count = 0, i = 0, j = 0;
  
  while (i < n && j < m) {
    if (a[i] - k > b[j]) {
      j++;
    }
    
    else if (a[i] + k < b[j]) {
      i++;
    }
    
    else {
      count++; i++; j++;
    }
  }
  
  cout << count << "\n";
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define MAXN 1000010

int a[MAXN], sumLeft, n, sumRight;

int main () {_
  cin >> n;
  
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    (i == 1 ? sumLeft : sumRight) += a[i];
  }
  
  for (int i = 1; i < n; i++) {
    if (sumLeft == sumRight) {
      cout << i << "\n";
      return 0;
    }
    
    sumLeft += a[i + 1];
    sumRight -= a[i + 1];
  }
  
  cout << (sumLeft == sumRight ? n : -1) << "\n";
  
  return 0;
}
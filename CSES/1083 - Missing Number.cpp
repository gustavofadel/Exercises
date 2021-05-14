# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define MAXN 200010

int a[MAXN], n;

int main () {_
  cin >> n;
  
  for (int i = 1; i < n; i++) {
    cin >> a[i];
  }
  
  sort(a + 1, a + n);
  
  for (int i = 1; i < n; i++) {
    if (a[i] != i) {
      cout << i << "\n";
      return 0;
    }
  } 
  
  cout << n << "\n";
  
  return 0;
}
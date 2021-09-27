# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e3 + 10;

int a[MAXN], n;

int main () {_
  while (cin >> n) {
    for (int i = 0; i < n; cin >> a[i++]); sort(a, a + n);
    
    int i = 0, j = n - 1, sum = 0;
    
    while (i < j) {
      sum += a[j--] - a[i++];
    }
    
    cout << sum << "\n";
  }
  
  return 0;
}
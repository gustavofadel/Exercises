# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 2e5 + 10;

int a[MAXN], n;

int main () {_
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  cout << min(n, accumulate(a, a + n, 1)) << "\n";
  
  return 0;
}
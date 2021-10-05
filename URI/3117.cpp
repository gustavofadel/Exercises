# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e6 + 10; 

int a[MAXN], cnt, k, n;

int main () {_
  cin >> n >> k;
  
  for (int i = 0; i < n; cin >> a[i], cnt += (a[i++] <= 0));
  
  cout << (cnt >= k ? "YES" : "NO") << "\n";
  
  return 0;
}
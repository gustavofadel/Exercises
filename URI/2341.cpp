# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXK = 1e3 + 10;

int freq[MAXK], k, n, res, x;
map<int, int> mp;

int main () {
  cin >> n >> k; res = n;
  
  for (int i = 0; i < n; cin >> x, freq[x]++, i++);
  for (int i = 1; i <= k; res = min(res, freq[i]), i++);
  
  cout << res << "\n";
  
  return 0;
}
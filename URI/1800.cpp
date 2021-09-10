# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int e, freq[1010], q;

int main () {_
  cin >> q >> e;
  
  for (int i = 0, s; i < e; cin >> s, freq[s] = 1, i++);
  for (int i = 0, c; i < q; cin >> c, cout << !freq[c] << "\n", freq[c] = 1, i++);
  
  return 0;
}
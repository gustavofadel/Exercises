# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int freq[1010], n;

int main () {_
  cin >> n;
  
  for (int i = 0, x; i < n; cin >> x, freq[x] = 1, i++);
  
  for (int i = 1; i <= n; i++) {
    if (!freq[i]) {
      return cout << i << "\n", 0;
    }
  }
}
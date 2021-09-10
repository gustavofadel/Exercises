# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, r;

int main () {_
  while (cin >> n >> r) {
    bool all = true;
    int freq[n]; memset(freq, 0, sizeof(freq));
    
    for (int i = 0, x; i < r; cin >> x, freq[--x]++, i++);
    
    for (int i = 0; i < n; i++) {
      all &= freq[i];
      
      if (!freq[i]) {
        cout << i + 1 << " ";
      }
    }
    
    if (all) {
      cout << "*";
    }
    
    cout << "\n";
  }
  
  return 0;
}
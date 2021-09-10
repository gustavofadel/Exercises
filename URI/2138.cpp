# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string s;

int main () {_
  while (cin >> s) {
    int cur = 0, freq[10], res;
    
    memset(freq, 0, sizeof(freq));
    
    for (char c: s) {
      freq[c - '0']++;
    }
    
    for (int i = 0; i < 10; i++) {
      if (freq[i] >= cur) {
        cur = freq[i]; res = i;
      }
    }
    
    cout << res << "\n";
  }
  
  return 0;
}
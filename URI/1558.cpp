# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e4 + 10;

int n, sq[MAXN];

int main () {_
  for (int i = 1; i < MAXN; i++) {
    sq[i] = i * i;
  }
  
  while (cin >> n) {
    bool possible = false;
    
    if (n >= 0) {
      for (int i = 0; i * i <= n && !possible; i++) {
        for (int j = 0; j * j <= n && !possible; j++) {
          if (sq[i] + sq[j] > n) {
            break;
          }
          
          possible |= (sq[i] + sq[j] == n);
        }
      }
    }
    
    cout << (possible ? "YES" : "NO") << "\n";
  }
  
  return 0;
}
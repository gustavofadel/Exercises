# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e5 + 10;

int c[MAXN], k, n, s[MAXN];

int main () {_
  while (cin >> n >> k && (n || k)) {
    bool possible = true;
    int mn = MAXN, mx = 0;
    stack<int> st;
    
    memset(c, 0, sizeof(c)); memset(s, 0, sizeof(s));
    
    for (int i = 1, x, y; i <= n; i++) {
      cin >> x >> y; c[x] = i; s[y] = i; mn = min(mn, x); mx = max(mx, y);
    }
    
    for (int i = mn; i <= mx && possible; i++) {
      if (s[i]) {
        if (!st.empty() && st.top() == s[i]) {
          st.pop();
        }
        
        else {
          possible = false;
        }
      }
      
      if (c[i]) {
        if (st.size() < k) {
          st.push(c[i]);
        }
        
        else {
          possible = false;
        }
      }
    }
    
    cout << (possible ? "Sim" : "Nao") << "\n";
  }
  
  return 0;
}
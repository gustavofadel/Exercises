# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXM = 1e2 + 10;

int a[MAXM], k, m, x;

int main () {_
  while (cin >> m >> k) {
    int elapsed = 0;
    set<int> st;
    
    for (int i = 1; i <= m; cin >> a[i++]); 
    while (k--) { cin >> x; elapsed += (st.size() < m ? a[x] : 0); st.insert(x); }
    
    cout << (st.size() == m ? elapsed : -1) << "\n";
  }
  
  return 0;
}
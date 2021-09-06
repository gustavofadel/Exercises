# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

char l;
int m, n;

int main () {_
  while (cin >> n) {
    int cnt = 0;
    map<int, int> d, e;
    set<int> st;
    
    while (n--) {
      cin >> m >> l; (l == 'E' ? e : d)[m]++; st.insert(m);
    }
    
    for (int x: st) {
      cnt += min(d[x], e[x]);
    }
    
    cout << cnt << "\n";
  }
  
  return 0;
}
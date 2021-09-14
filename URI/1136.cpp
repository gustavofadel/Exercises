# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e2;

int b, n, vet[MAXN];

int main () {_
  while (cin >> n >> b && (n || b)) {
    set<int> st;
    
    for (int i = 0; i < b; cin >> vet[i++]);
    
    for (int i = 0; i < b; i++) {
      for (int j = 0; j < b; j++) {
        int diff = abs(vet[i] - vet[j]);
        
        if (0 <= diff && diff <= n) {
          st.insert(diff);
        }
      }
    }
    
    cout << "NY"[st.size() == n + 1] << "\n";
  }
  
  return 0;
}
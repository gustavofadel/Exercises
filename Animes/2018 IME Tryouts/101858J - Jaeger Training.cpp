# include <bits/stdc++.h>
 
using namespace std;
 
const int MAXN = 1e6 + 10;
 
int n, s, tree[MAXN];
 
void update (int i, int v) {
  for (; i < MAXN; i += (i & -i)) {
    tree[i] += v;
  }
}
 
int query (int i) {
  int answer = 0;
  
  for (; i > 0; i -= (i & -i)) {
    answer += tree[i];
  }
  
  return answer;
}
 
int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    cin >> s;
    
    cout << n - (i - query(s + 1)) << "\n";
    
    update(s + 2, 1);
  }
  
  return 0;
}
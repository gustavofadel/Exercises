# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e4 + 10;

int c, m, n, res, v[MAXN];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

int main () {_
  cin >> n >> m;
  
  for (int i = 1; i <= n; cin >> v[i++]);
  for (int i = 1; i <= n; pq.push({0, i++}));
  
  while (m--) {
    cin >> c;
    
    int current = pq.top().first, id = pq.top().second; pq.pop();
    int next = current + v[id] * c;
    
    pq.push({next, id}); res = max(res, next);
  }
  
  cout << res << "\n";
  
  return 0;
}
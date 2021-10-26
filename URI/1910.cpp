# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e5 + 1;

int d, dist[MAXN], mark[MAXN], k, o, x;

int main () {_
  while (cin >> o >> d >> k && (o || d || k)) {
    queue<int> q;
    
    fill(dist, dist + MAXN, -1), fill(mark, mark + MAXN, 0);
    
    while (k--) cin >> x, mark[x] = 1;
    
    dist[o] = 0, q.push(o);
    
    while (!q.empty() && !~dist[d]) {
      int u = q.front(); q.pop();
      if (u - 1 && !mark[u - 1] && !~dist[u - 1]) dist[u - 1] = dist[u] + 1, q.push(u - 1);
      if (u + 1 < MAXN && !mark[u + 1] && !~dist[u + 1]) dist[u + 1] = dist[u] + 1, q.push(u + 1);
      if (!(u & 1) && !mark[u >> 1] && !~dist[u >> 1]) dist[u >> 1] = dist[u] + 1, q.push(u >> 1);
      if ((u << 1) < MAXN && !mark[u << 1] && !~dist[u << 1]) dist[u << 1] = dist[u] + 1, q.push(u << 1);
      if (3 * u < MAXN && !mark[3 * u] && !~dist[3 * u]) dist[3 * u] = dist[u] + 1, q.push(3 * u);
    }
    
    cout << dist[d] << "\n";
  }
  
  return 0;
}
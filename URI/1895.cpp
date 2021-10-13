# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int l, n, res[2], s, t;
queue<int> q;

int main () {_
  cin >> n >> t >> l;
  
  for (int i = 0; i < n - 1; cin >> s, q.push(s), i++);
  
  int i = 0;
  
  while (!q.empty()) {
    s = q.front(); q.pop();
    if (abs(t - s) <= l) { res[i] += abs(t - s); t = s; }
    i ^= 1;
  }
  
  cout << res[0] << " " << res[1] << "\n";
  
  return 0;
}
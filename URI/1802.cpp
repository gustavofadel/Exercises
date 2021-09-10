# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int k, n;
vector<int> b, f, m, p, q, val;

int main () {_
  cin >> n; p.resize(n); for (int i = 0; i < n; cin >> p[i++]);
  cin >> n; m.resize(n); for (int i = 0; i < n; cin >> m[i++]);
  cin >> n; f.resize(n); for (int i = 0; i < n; cin >> f[i++]);
  cin >> n; q.resize(n); for (int i = 0; i < n; cin >> q[i++]);
  cin >> n; b.resize(n); for (int i = 0; i < n; cin >> b[i++]);
  cin >> k;
  
  for (int pi: p) {
    for (int mi: m) {
      for (int fi: f) {
        for (int qi: q) {
          for (int bi: b) {
            val.push_back(pi + mi + fi + qi + bi);
          }
        }
      }
    }
  }
  
  sort(val.rbegin(), val.rend());
  
  return cout << accumulate(val.begin(), val.begin() + k, 0) << "\n", 0;
}
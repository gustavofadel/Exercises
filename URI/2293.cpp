# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, m, x;
map<int, int> columns, rows;

bool cmp (pair<int, int> p1, pair<int, int> p2) {
  return p1.second < p2.second;
}

int main () {_
  cin >> n >> m;
  
  for (int i = 0; i < n; i++) for (int j = 0; j < m; cin >> x, rows[i] += x, columns[j++] += x);
  
  cout << max(max_element(columns.begin(), columns.end(), cmp)->second, max_element(rows.begin(), rows.end(), cmp)->second) << "\n";
  
  return 0;
}
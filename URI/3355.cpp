# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

typedef pair<int, int> ii;

const int MAXN = 1e3 + 10;

ii dir[8] = {{0, 1}, {1, 0}, {1, 1}, {1, -1}, {0, -1}, {-1, 0}, {-1, -1}, {-1, 1}};
int n, res, val1[4], val2[4];
string grid[MAXN];
vector<int> vet[4][MAXN << 1];

void set_val (int i, int j) {
  val1[0] = i, val1[1] = j, val1[2] = j - i + n - 1, val1[3] = i + j;
  val2[0] = j, val2[1] = val2[2] = val2[3] = i;
}

int check (int i, int j, int k) {
  int flag = 0; set_val(i, j);
  
  if (k >= 4) flag = 1, k -= 4;
  
  return flag ? (vet[k][val1[k]].empty() || val2[k] < vet[k][val1[k]].front()) : (vet[k][val1[k]].empty() || val2[k] > vet[k][val1[k]].back());
}

int main () {_
  cin >> n;
  
  for (int i = 0; i < n; cin >> grid[i++]);
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (grid[i][j] == 'P') {
        set_val(i, j);
        for (int k = 0; k < 4; k++) vet[k][val1[k]].push_back(val2[k]);
      }
    }
  }
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (grid[i][j] == '.') {
        int cnt = 0;
        for (int k = 0; k < 8; k++) cnt += !check(i, j, k);
        res = max(res, cnt);
      }
    }
  }
  
  return cout << res << "\n", 0;
}
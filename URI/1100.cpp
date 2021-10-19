# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int vis[8][8];
pair<int, int> dir[8] = {{-2, 1}, {-2, -1}, {-1, 2}, {-1, -2}, {2, 1}, {2, -1}, {1, 2}, {1, -2}}, pos1, pos2; 
string s1, s2;

int bfs () {
  queue<pair<pair<int, int>, int>> q;
  
  q.push({pos1, 0}); vis[pos1.first][pos1.second] = 1;
  
  while (!q.empty()) {
    auto [cur, cnt] = q.front(); q.pop();
    auto [x, y] = cur;
    
    if (x == pos2.first && y == pos2.second) return cnt;
    
    vis[x][y] = 1;
    
    for (auto [nx, ny]: dir) {
      if (0 <= x + nx && x + nx < 8 && 0 <= y + ny && y + ny < 8 && !vis[x + nx][y + ny]) {
        q.push({{x + nx, y + ny}, cnt + 1});
      }
    }
  }
}

int main () {_
  while (cin >> s1 >> s2) {
    memset(vis, 0, sizeof(vis));
    pos1 = {8 - (s1[1] - '0'), s1[0] - 'a'}; pos2 = {8 - (s2[1] - '0'), s2[0] - 'a'};
    cout << "To get from " << s1 << " to " << s2 << " takes " << bfs() << " knight moves.\n";
  }
  
  return 0;
}
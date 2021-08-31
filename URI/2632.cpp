# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int cx, cy, h, n, t, w, x, y;
map<string, pair<int, vector<int>>> mp;
string s;

int main () {_
  mp["fire"] = {200, {20, 30, 50}}; mp["water"] = {300, {10, 25, 40}};
  mp["earth"] = {400, {25, 55, 70}}; mp["air"] = {100, {18, 38, 60}};

  cin >> t;
  
  while (t--) {
    bool intersects = false;
    
    cin >> w >> h >> x >> y >> s >> n >> cx >> cy; n--;
    
    intersects |= (x <= cx && cx <= x + w && y - mp[s].second[n] <= cy && cy <= y + h + mp[s].second[n]);
    intersects |= (x - mp[s].second[n] <= cx && cx <= x + w + mp[s].second[n] && y <= cy && cy <= y + h);
    intersects |= (hypot(cx - x, cy - y) <= mp[s].second[n]);
    intersects |= (hypot(cx - (x + w), cy - y) <= mp[s].second[n]);
    intersects |= (hypot(cx - x, cy - (y + h)) <= mp[s].second[n]);
    intersects |= (hypot(cx - (x + w), cy - (y + h)) <= mp[s].second[n]);
    
    cout << (intersects ? mp[s].first : 0) << "\n";
  }
  
  return 0;
}
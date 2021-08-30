# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int h, n;
map<string, int> mp;
string e, g;

int main () {_
  cin >> n;
  
  while (n--) {
    cin >> e >> g >> h; mp[g] += h;
  }
  
  cout << mp["bonecos"] / 8 + mp["arquitetos"] / 4 + mp["musicos"] / 6 + mp["desenhistas"] / 12 << "\n";
  
  return 0;
}
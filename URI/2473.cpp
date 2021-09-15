# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int cnt, flavinho[6], x;
map<int, int> mp;

int main () {_
  for (int i = 0; i < 6; cin >> flavinho[i++]);
  for (int i = 0; i < 6; cin >> x, mp[x] = 1, i++);
  for (int i = 0; i < 6; cnt += mp[flavinho[i++]]);
  
  cout << (cnt < 3 ? "azar" : (cnt == 3 ? "terno" : (cnt == 4 ? "quadra" : (cnt == 5 ? "quina" : "sena")))) << "\n";
  
  return 0;
}
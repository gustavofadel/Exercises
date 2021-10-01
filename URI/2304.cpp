# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

char op, p1, p2;
int n, q, x;
map<char, int> mp;

int main () {_
  cin >> q >> n; mp['D'] = mp['E'] = mp['F'] = q;
  
  while (n--) {
    cin >> op;
    if (op == 'C') { cin >> p1 >> x; mp[p1] -= x; }
    else if (op == 'V') { cin >> p1 >> x; mp[p1] += x; }
    else { cin >> p1 >> p2 >> x; mp[p1] += x; mp[p2] -= x; }
  }
  
  return cout << mp['D'] << " " << mp['E'] << " " << mp['F'] << "\n", 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 20;

float l, q;
int n;
string s[MAXN];

int main () {_
  cin >> n >> l >> q;
  
  for (int i = 0; i < n; cin >> s[i++]);
  
  int i = 0; while (l > q) l -= q, i = (i + 1) % n;
  
  return cout << fixed << setprecision(1) << s[i] << " " << l << "\n", 0;
}
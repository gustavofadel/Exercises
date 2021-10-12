# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 30;

int b, c, d, n, r[MAXN], v;

int main () {_
  while (cin >> b >> n && (b || n)) {
    int flag = 0;
    for (int i = 1; i <= b; cin >> r[i++]);
    for (int i = 0; i < n; cin >> d >> c >> v, r[d] -= v, r[c] += v, i++);
    for (int i = 1; i <= b && !flag; flag |= (r[i++] < 0));
    cout << "SN"[flag] << "\n";
  }
  
  return 0;
}
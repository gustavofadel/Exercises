# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

const int MAXN = 1e6 + 10;

int n, x[MAXN];

int main () {_
  while (cin >> n) {
    ll diff = LLONG_MAX, pref = 0, tot = 0;
    for (int i = 0; i < n; cin >> x[i], tot += x[i++]);
    for (int i = 0; i < n; pref += x[i++], diff = min(diff, llabs((tot - pref) - pref)));
    cout << diff << "\n";
  }  
  
  return 0;
}
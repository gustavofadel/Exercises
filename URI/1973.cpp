# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

const int MAXN = 1e6 + 10;

bitset<MAXN> bs;
int n, x[MAXN], vis;
ll tot;

int main () {_
  cin >> n;
  
  for (int i = 0; i < n; cin >> x[i], tot += x[i++]);
  
  for (int i = 0; 0 <= i && i < n;) {
    vis += (!bs[i]); bs[i] = 1;
    if (x[i] & 1) { tot--; x[i++]--; }
    else { if (x[i]) { tot--; x[i]--; } i--; }
  }
  
  cout << vis << " " << tot << "\n";
  
  return 0;
}
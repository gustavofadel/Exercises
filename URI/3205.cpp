# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int c, e, n, r;

int main () {_
  cin >> n;
  
  while (n--) {
    cin >> r >> e >> c;
    cout << (r > e - c ? "do not advertise" : (r == e - c ? "does not matter" : "advertise")) << "\n";
  }
  
  return 0;
}
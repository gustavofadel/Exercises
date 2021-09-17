# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, b, n;

int main () {_
  while (cin >> n && n) {
    int j1 = 0, j2 = 0;
    
    for (int i = 0; i < n; cin >> a >> b, j1 += (a > b), j2 += (b > a), i++);
    
    cout << j1 << " " << j2 << "\n";
  }

  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, cnt, f, n;

int main () {_
  cin >> a >> n;
  
  while (n--) {
    cin >> f; cnt += (a * f >= 4e7);
  }
  
  cout << cnt << "\n";
  
  return 0;
}
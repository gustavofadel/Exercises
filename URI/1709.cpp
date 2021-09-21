# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int cnt, p, pos = 1;

int main () {
  cin >> p;
  
  while (pos != 1 || !cnt) {
    cnt++; pos = (pos <= p / 2 ? 2 * pos : pos - (p - pos + 1));
  }
  
  cout << cnt << "\n";
  
  return 0;
}
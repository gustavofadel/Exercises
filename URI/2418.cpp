# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

float n[5], sum;

int main () {_
  for (int i = 0; i < 5; cin >> n[i], sum += n[i++]); sort(n, n + 5);
  return cout << fixed << setprecision(1) << sum - n[0] - n[4] << "\n", 0;
}
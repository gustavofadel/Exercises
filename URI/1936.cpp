# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int fat[9], n, res;

int main () {_
  fat[0] = 1;
  
  for (int i = 1; i < 9; fat[i] = fat[i - 1] * i, i++);
  
  cin >> n;
  
  for (int i = 8; ~i; res += (n / fat[i]), n %= fat[i--]);
  
  return cout << res << "\n", 0;
}
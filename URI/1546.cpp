# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, k, x;
string members[4] = {"Rolien", "Naej", "Elehcim", "Odranoel"};

int main () {_
  cin >> n;
  
  while (n--) {
    cin >> k; for (int i = 0; i < k; cin >> x, cout << members[--x] << "\n", i++);
  }

  return 0;
}
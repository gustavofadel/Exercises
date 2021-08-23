# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, x, y;
string s1, s2;

int main () {_
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> s1 >> s2; x = stoi(s1, 0, 2); y = stoi(s2, 0, 2);
    cout << "Pair #" << i << ": " << (__gcd(x, y) == 1 ? "Love is not all you need!" : "All you need is love!") << "\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int c, f, p;

int main () {_
  cin >> c >> p >> f; return cout << "NS"[c * f <= p] << "\n", 0;
}
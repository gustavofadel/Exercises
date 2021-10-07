# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

ll n;

int main () {_
  cin >> n; return cout << (1ll << __builtin_popcountll(n)) << "\n", 0;
}
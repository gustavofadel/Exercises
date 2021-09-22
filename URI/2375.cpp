# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, l, n, p;

int main () {_
  cin >> n >> a >> l >> p; return cout << "NS"[n <= a && n <= l && n <= p] << "\n", 0;
}
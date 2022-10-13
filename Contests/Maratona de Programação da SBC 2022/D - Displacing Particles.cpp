# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

int n, x, y;

int main () {_
    cin >> n >> x >> y;
	
	cout << n - __builtin_ctz(x) - 1 << "\n";
}
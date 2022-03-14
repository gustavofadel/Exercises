# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e2 + 10;

int a[MAXN], n, p, q;

int main () {_
    while (cin >> n >> q) {
        for (int i = 0; i < n; cin >> a[i++]);
        sort(a, a + n, greater<int>());
        while (q--) cin >> p, cout << a[--p] << "\n";
    }
    
    return 0;
}
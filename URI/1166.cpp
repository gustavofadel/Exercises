# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAX = 5e1 + 1;

int ans[MAX], n, t;

int main () {_
    ans[1] = 1; for (int i = 2; i <= MAX; i++) ans[i] = ans[i - 1] + i + (i & 1);
    cin >> t; while (t--) cin >> n, cout << ans[n] << "\n";
}
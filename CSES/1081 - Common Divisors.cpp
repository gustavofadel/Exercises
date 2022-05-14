# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e6;

int cnt[MAXN + 1], n, x[MAXN + 1];

int main () {_
    cin >> n;
    
    for (int i = 0; i < n; cin >> x[i], cnt[x[i++]]++);
    
    for (int gcd = MAXN; gcd; gcd--) {
        int sum = 0;
        for (int i = gcd; i <= MAXN; sum += cnt[i], i += gcd);
        if (sum > 1) return cout << gcd << "\n", 0;
    }
}
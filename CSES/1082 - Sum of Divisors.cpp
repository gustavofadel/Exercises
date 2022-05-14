# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using ll = long long;

const ll MOD = 1e9 + 7;

ll n, res;

int main () {_
    cin >> n;
    
    for (ll i = 1, j; i <= n; i = j) {
        ll q = n / i; j = n / q + 1;
        ll x = j - i, y = i + j - 1;
        (x & 1 ? y : x) >>= 1;
        x %= MOD, y %= MOD;
        res = (res + q % MOD * x % MOD * y % MOD) % MOD;
    }
    
    return cout << res << "\n", 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using ll = long long;

const ll MOD = 1e9 + 7;

int n;
ll a, b, c;

ll binpow (ll a, ll b, ll m) {
    ll res = 1;
    
    a %= m;
    
    while (b) {
        if (b & 1) (res *= a) %= m;
        (a *= a) %= m;
        b >>= 1;
    }
    
    return res;
}

int main () {_
    cin >> n;
    
    while (n--) {
        cin >> a >> b >> c;
        cout << binpow(a, binpow(b, c, MOD - 1), MOD) << "\n";
    }
    
    return 0;
}
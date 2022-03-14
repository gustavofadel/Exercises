# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

typedef long long ll;

const int INV = 833333341;
const int MAXN = 1e5 + 10;
const int MOD = 1e9 + 9;

int n;
ll fat[MAXN];

int main () {_
    fat[1] = 1;
    
    for (ll i = 2; i < MAXN; i++) fat[i] = (fat[i - 1] * i) % MOD;
    
    while (cin >> n && n) cout << (fat[n] * INV) % MOD << "\n";
    
    return 0;
}
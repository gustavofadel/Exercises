# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

typedef long long ll;

const int N = 1e2 + 10;
const int X = 1e6 + 10;
const ll MOD = 1e9 + 7;

int n;
ll c[N], dp[X], x;

ll solve (ll target) {
    if (target < 0) {
        return 0;
    }
    
    if (target == 0) {
        return dp[target] = 1;
    }
    
    if (dp[target] != -1) {
        return dp[target];
    }
    
    ll result = 0;
    
    for (int i = 0; i < n; i++) {
        (result += solve(target - c[i])) %= MOD;
    }
    
    return dp[target] = result;
}

int main () {_
    cin >> n >> x;
    
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    
    memset(dp, -1, sizeof(dp));
    
    cout << solve(x) << "\n";
}
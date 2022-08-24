# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

typedef long long ll;

const int N = 1e2 + 10;
const int X = 1e6 + 10;
const ll MOD = 1e9 + 7;

int n;
ll c[N], dp[X], x;

int main () {_
    cin >> n >> x;
    
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    
    // dp[i] = Number of ways to produce a sum i
    
    dp[0] = 1;
    
    for (int i = 0; i < n; i++) {
        for (int j = c[i]; j <= x; j++) {
            (dp[j] += dp[j - c[i]]) %= MOD;
        }
    }
    
    cout << dp[x] << "\n";
}
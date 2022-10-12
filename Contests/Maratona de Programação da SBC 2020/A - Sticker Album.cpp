# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

typedef long double ld;

const int N = 1e6 + 10;

ld dp[N], pref[N];
int a, b, n;

ld sum (int l, int r) {
    l = max(l, 0), r = max(r, 0);
    return pref[r] - (l > 0 ? pref[l - 1] : 0);
}

int main () {_
    cin >> n >> a >> b;
    
    // dp[i] = Number of packets needed to get i stickers
    dp[0] = 0;
    
    
    // Based on https://youtu.be/icXLy96-yGI?t=6827
    for (int i = 1; i <= n; i++) {
        if (a > 0) {
            dp[i] = 1 + 1.0 / (b - a + 1) * sum(i - b, i - a);
        }
        
        else {
            dp[i] = (1 + 1.0 / (b + 1) * sum(i - b, i - 1)) / (1 - 1.0 / (b + 1));
        }
        
        pref[i] = pref[i - 1] + dp[i];
    }
    
    cout << fixed << setprecision(5) << dp[n] << "\n";
}
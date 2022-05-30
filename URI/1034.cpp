# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAX = 26;

int a[MAX], m, n, t;

int main () {_
    cin >> t;
    
    while (t--) {
        cin >> n >> m;
        for (int i = 0; i < n; i++) cin >> a[i];
        
        int current, dp[m + 1];
        dp[0] = 0;
        for (int i = 1; i <= m; i++) dp[i] = INT_MAX;
        
        for (int i = 1; i <= m; i++) {
            for (int j = 0; j < n; j++) {
                if (a[j] <= i) {
                    current = dp[i - a[j]];
                    if (current != INT_MAX && current + 1 < dp[i]) dp[i] = current + 1;
                }
            }
        }
        
        cout << dp[m] << "\n";
    }
}
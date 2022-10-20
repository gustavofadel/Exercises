# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

const int N = 1e2 + 10;
const int SUM = 1e5;

int dp[N][SUM + 1], n, x[N];
vector<int> ans;

int main () {_
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    
    dp[0][0] = 1;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= SUM; j++) {
            dp[i][j] = dp[i - 1][j] || (j - x[i - 1] >= 0 && dp[i - 1][j - x[i - 1]]);
        }
    }
    
    for (int j = 1; j <= SUM; j++) {
        if (dp[n][j]) {
            ans.push_back(j);
        }
    }
    
    cout << ans.size() << "\n";
    
    for (auto sum: ans) {
        cout << sum << " ";
    }
    
    cout << "\n";
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

typedef long long ll;

const int N = 5e3 + 10;

int n, x[N];
ll dp[N][N], sum;

int main () {_
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x[i]; sum += x[i];
    }
    
    for (int i = n - 1; i >= 0; i--) {
        for (int j = i; j < n; j++) {
            if (i == j) dp[i][j] = x[i];
            else dp[i][j] = max(x[i] - dp[i + 1][j], x[j] - dp[i][j - 1]);
        }
    }
    
    cout << ((sum + dp[0][n - 1]) >> 1) << "\n";
}
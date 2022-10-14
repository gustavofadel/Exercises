# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

typedef long long ll;

const int MAXN = 60;

int k, n;
ll a, b, c[MAXN][MAXN], p[MAXN];

ll solve (ll max_weight, int k, int i) {
    if (k == 0) {
        return 1;
    }
    
    if (i < 0) {
        return 0;
    }
    
    if (p[i] > max_weight) {
        return solve(max_weight, k, i - 1);
    }
    
    return c[i][k] + solve(max_weight - p[i], k - 1, i - 1);
}

void binomial_coefficients () {
    c[0][0] = 1;
    
    for (int n = 1; n < MAXN; n++) {
        c[n][0] = c[n][n] = 1;
        
        for (int k = 1; k < n; k++) {
            c[n][k] = c[n - 1][k - 1] + c[n - 1][k];
        }
    }
}

int main () {_
    binomial_coefficients();
    
    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    
    cin >> a >> b;
    
    sort(p, p + n);
    
    cout << solve(b, k, n - 1) - solve(a - 1, k, n - 1) << "\n";
}
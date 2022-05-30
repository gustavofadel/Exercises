# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAX = 1e2 + 1;

int dp[MAX][51], n, pac, qt[MAX], weight[MAX];

int main () {_
    cin >> n;
    
    while (n--) {
        cin >> pac; 
        for (int i = 0; i < pac; i++) cin >> qt[i] >> weight[i];
        
        for (int i = 0; i <= pac; i++) {
            for (int j = 0; j <= 50; j++) {
                if (i == 0 || j == 0) dp[i][j] = 0;
                else if (weight[i - 1] <= j) dp[i][j] = max(qt[i - 1] + dp[i - 1][j - weight[i - 1]], dp[i - 1][j]);
                else dp[i][j] = dp[i - 1][j];
            }
        }
        
        int amount_toys = dp[pac][50], count = 0, j = 50;
        
        for (int i = pac; i > 0 && amount_toys > 0; i--) {
            if (amount_toys != dp[i - 1][j]) {
                amount_toys -= qt[i - 1];
                j -= weight[i - 1];
                count++;
            }
        }
        
        cout << dp[pac][50] << " brinquedos\nPeso: " << 50 - j << " kg\nsobra(m) " << pac - count << " pacote(s)\n\n";
    }
}
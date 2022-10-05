# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

typedef long long ll;

ll n;
// f[i] = Number of ways to prepare a workout session with i 'A's
vector<ll> f = {1, 2};

// Function to factor the number n with fibonacci numbers
void solve (ll n, int idx, vector<int> factors) {
    // Check if it was possible to complete the factorization
    if (n == 1) {
        string ans;
        
        for (int factor: factors) {
            ans += string(factor, 'A') + "B"; 
        }
        
        cout << ans << "\n";
        exit(0);
    }
    
    // Search with backtracking if it's possible to use other factors
    for (int i = idx; i > 0; i--) {
        if (n % f[i] == 0) {
            factors.push_back(i);
            solve(n / f[i], i, factors);
            factors.pop_back();
        }
    }
}

int main () {_
    cin >> n;
    
    while (f.back() < n) {
        f.push_back(f[f.size() - 1] + f[f.size() - 2]);
    }
    
    solve(n, f.size() - 1, vector<int>());
    
    cout << "IMPOSSIBLE\n";
}
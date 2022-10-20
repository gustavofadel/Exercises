# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

int n, x;
vector<int> dp;

int main () {_
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        
        auto it = lower_bound(dp.begin(), dp.end(), x);
        
        if (it == dp.end()) {
            dp.push_back(x);
        }
        
        else {
            *it = x;
        }
    }
    
    cout << dp.size() << "\n";
}
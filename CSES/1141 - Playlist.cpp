# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

const int N = 2e5 + 10;

int ans, k[N], n;
map<int, int> mp;

int main () {_
    cin >> n;
    
    for (int i = 0; i < n; i++) cin >> k[i];
    
    for (int i = 0, j = 0; i < n; i++) {
        j = max(j, mp[k[i]]);
        ans = max(ans, i - j + 1);
        mp[k[i]] = i + 1;
    }
    
    cout << ans << "\n";
}
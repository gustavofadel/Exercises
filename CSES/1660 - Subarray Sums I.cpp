# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

typedef long long ll;

const int N = 2e5 + 10;

int n;
map<ll, ll> mp;
ll a[N], ans, sum, x;

int main () {_
    cin >> n >> x;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i]; sum += a[i];
        if (sum == x) ans++;
        if (mp[sum - x]) ans += mp[sum - x];
        mp[sum]++;
    }
    
    cout << ans << "\n";
}
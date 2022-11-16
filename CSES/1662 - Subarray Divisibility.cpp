# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

typedef long long ll;

const int N = 2e5 + 10;

int n;
map<ll, ll> mp;
ll a[N], ans, sum;

int main () {_
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i]; sum += a[i];
        mp[((sum % n) + n) % n]++;
    }
    
    for (int i = 0; i < n; i++) {
        if (mp[i] > 1) ans += (mp[i] * (mp[i] - 1)) / 2;
    }
    
    cout << ans + mp[0] << "\n";
}
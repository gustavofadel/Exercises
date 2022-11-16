# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

typedef long long ll;

const int N = 2e5 + 10;

int n, p[N];
ll ans;

int main () {_
    cin >> n;
    
    for (int i = 0; i < n; i++) cin >> p[i];
    
    sort(p, p + n);
    
    for (int i = 0; i < n; i++) ans += abs(p[n >> 1] - p[i]);
    
    cout << ans << "\n";
}
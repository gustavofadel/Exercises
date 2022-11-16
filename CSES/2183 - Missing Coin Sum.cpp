# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

typedef long long ll;

const int N = 2e5 + 10;

int n, x[N];
ll ans = 1;

int main () {_
    cin >> n;
    
    for (int i = 0; i < n; i++) cin >> x[i];
    
    sort(x, x + n);
    
    for (int i = 0; i < n && x[i] <= ans; i++) ans += x[i];
    
    cout << ans << "\n";
}
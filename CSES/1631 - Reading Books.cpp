# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

typedef long long ll;

const int N = 2e5 + 10;

int n;
ll mx, sum, t[N];

int main () {_
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> t[i]; mx = max(mx, t[i]), sum += t[i];
    }
    
    cout << (mx > sum - mx ? 2 * mx : sum) << "\n";
}
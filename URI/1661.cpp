# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

typedef long long ll;

const int MAX = 1e5 + 1;

int n;
ll a[MAX];

int main () {_
    while (cin >> n && n) {
        ll work = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n - 1; i++) work += llabs(a[i]), a[i + 1] += a[i];
        cout << work << "\n";
    }
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

typedef long long ll;

int n;
ll sum;
vector<int> a, b;

int main () {_
    cin >> n;
    
    sum = (1LL * n * (n + 1)) >> 1;
    
    if (sum & 1) return !(cout << "NO\n");
    
    sum >>= 1;
    
    for (int i = n; i >= 1; i--) {
        if (i <= sum) sum -= i, a.push_back(i);
        else b.push_back(i);
    }
    
    cout << "YES\n";
    cout << a.size() << "\n"; for (int x: a) cout << x << " "; cout << "\n";
    cout << b.size() << "\n"; for (int x: b) cout << x << " "; cout << "\n";
}
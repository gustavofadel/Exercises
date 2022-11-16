# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

int a, b, t;

int main () {_
    cin >> t;
    
    while (t--) {
        cin >> a >> b;
        cout << (max(a, b) <= (min(a, b) << 1) && !((a + b) % 3) ? "YES" : "NO") << "\n";
    }
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

const int M = 1e3 + 10;

int d, m, t, y[M];

int main () {_
    cin >> t >> d >> m;
    
    y[0] = 0, y[m + 1] = d;
    
    for (int i = 1; i <= m; i++) {
        cin >> y[i];
    }
    
    for (int i = 1; i <= m + 1; i++) {
        if (y[i] - y[i - 1] >= t) {
            cout << "Y\n";
            exit(0);
        }
    }
    
    cout << "N\n";
}
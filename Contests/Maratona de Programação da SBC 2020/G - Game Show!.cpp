# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

int best = 100, c, current = 100, v;

int main () {_
    cin >> c;
    
    for (int i = 0; i < c; i++) {
        cin >> v;
        current += v;
        best = max(best, current);
    }
    
    cout << best << "\n";
}
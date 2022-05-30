# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAX = 51;

int cost, n, revenue[MAX];

int main () {_
    while (cin >> n) {
        cin >> cost;
        for (int i = 0; i < n; i++) cin >> revenue[i], revenue[i] -= cost;
        int current = revenue[0], maximum = revenue[0];
        for (int i = 1; i < n; i++) current = max(revenue[i], current + revenue[i]), maximum = max(maximum, current);
        cout << max(maximum, 0) << "\n";
    }
}
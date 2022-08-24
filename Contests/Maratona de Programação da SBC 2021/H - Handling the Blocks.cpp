# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

const int N = 1e5 + 10;

int k, n;
vector<pair<int, int>> ordered, original;

int main () {_
    cin >> n >> k;
    
    ordered.resize(n);
    original.resize(n);
    
    for (int i = 0; i < n; i++) {
        cin >> original[i].first >> original[i].second;
        ordered[i] = original[i];
    }
    
    sort(ordered.begin(), ordered.end());
    
    for (int i = 0; i < n; i++) {
        if (original[i].second != ordered[i].second) {
            cout << "N\n";
            exit(0);
        }
    }
    
    cout << "Y\n";
}
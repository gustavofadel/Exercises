# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

const int N = 2e5 + 10;

int maximum_gap, n, p[N], previous, x;

// Up-bottom solution
int main () {_
    cin >> x >> n;
    
    set<int> positions {0, x};
    vector<int> gaps(n);
    
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        positions.insert(p[i]);
    }
    
    for (int current: positions) {
        maximum_gap = max(maximum_gap, current - previous);
        previous = current;
    }
    
    gaps[n - 1] = maximum_gap;
    
    for (int i = n - 1; i > 0; i--) {
        // Remove the last added traffic light
        positions.erase(p[i]);
        // Retrieve the next traffic light position
        auto next_position = positions.upper_bound(p[i]);
        // Calculate the gap and compare if it's the maximum gap
        int right = *next_position;
        int left = *(--next_position);
        maximum_gap = max(maximum_gap, right - left);
        gaps[i - 1] = maximum_gap;
    }
    
    for (int i = 0; i < n; i++) {
        cout << gaps[i] << " \n"[i == n - 1];
    }
}
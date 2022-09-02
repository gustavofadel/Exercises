# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

int current, maximum, n;

int main () {_
    cin >> n;
    
    vector<int> arrival(n), leaving(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arrival[i] >> leaving[i];
    }
    
    sort(arrival.begin(), arrival.end());
    sort(leaving.begin(), leaving.end());
    
    for (int i = 0, j = 0; i < n && j < n;) {
        if (arrival[i] <= leaving[j]) {
            current++;
            maximum = max(maximum, current);
            i++;
        }
        
        else {
            current--;
            j++;
        }
    }
    
    cout << maximum << "\n";
}
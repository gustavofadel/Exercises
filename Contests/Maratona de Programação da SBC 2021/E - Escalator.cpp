# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

bool waiting;
int d, direction, last, n, t;

int main () {_
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> t >> d;
        
        if (t > last && waiting) {
            direction ^= 1;
            last += 10;
            waiting = false;
        }
        
        if (t > last) {
            direction = d;
            last = t + 10;
        }
        
        else if (d == direction) {
            last = t + 10;
        }
        
        else {
            waiting = true;
        }
    }
    
    if (waiting) {
        last += 10;
    }
    
    cout << last << "\n";
}
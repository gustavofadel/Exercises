# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

int h, m, n, t;
multiset<int> tickets;

int main () {_
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        cin >> h;
        tickets.insert(h);
    }
    
    while (m--) {
        cin >> t;
        
        auto position = tickets.upper_bound(t);
        
        if (position == tickets.begin()) {
            cout << "-1\n";
        }
        
        else {
            cout << *(--position) << "\n";
            tickets.erase(position);
        }
    }
}
# include <bits/stdc++.h>
 
using namespace std;
 
# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
 
const int N = 5e5 + 10;
 
int cnt, h[N], n;
map<int, set<int>> pos;
 
int main () {_
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cin >> h[i];
        pos[h[i]].insert(i);
    }
    
    for (int i = 1; i <= n; i++) {
        auto it = pos[h[i] - 1].upper_bound(i);
        
        if (it == pos[h[i] - 1].end()) {
            cnt++;
        }
        
        else {
            pos[h[i] - 1].erase(it);
        }
    }
    
    cout << cnt << "\n";
}
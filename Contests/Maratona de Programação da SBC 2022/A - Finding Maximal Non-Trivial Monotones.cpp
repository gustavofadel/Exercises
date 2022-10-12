# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

int cur, n, res;
string s;

int main () {_
    cin >> n >> s;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') {
            cur++;
        }
        
        else {
            if (cur > 1) {
                res += cur;
            }
            
            cur = 0;
        }
    }
    
    if (cur > 1) {
        res += cur;
    }
    
    cout << res << "\n";
}
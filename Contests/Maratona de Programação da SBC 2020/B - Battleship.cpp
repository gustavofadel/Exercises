# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

const int MAX = 1e1 + 10;

bool valid = true;
int c, d, grid[MAX][MAX], n, l, r;

int main () {_
    cin >> n;
    
    while (n--) {
        cin >> d >> l >> r >> c;
        
        if (d == 0) {
            if (1 <= c + l - 1 && c + l - 1 <= 10) {
                for (int j = c; j < c + l && valid; j++) {
                    if (grid[r][j]) {
                        valid = false;
                    }
                }
                
                if (valid) {
                    for (int j = c; j < c + l; j++) {
                        grid[r][j] = 1;
                    }
                }
            }
            
            else {
                valid = false;
            }
        }
        
        else {
            if (1 <= r + l - 1 && r + l - 1 <= 10) {
                for (int i = r; i < r + l && valid; i++) {
                    if (grid[i][c]) {
                        valid = false;
                    }
                }
                
                if (valid) {
                    for (int i = r; i < r + l; i++) {
                        grid[i][c] = 1;
                    }
                }
            }
            
            else {
                valid = false;
            }
        }
    }
    
    cout << "NY"[valid] << "\n";
}
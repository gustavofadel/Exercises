# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

const int MAX = 50;

int ans, cells[MAX][MAX], c, l, mark[MAX][MAX], n;
string grid[MAX], word;
vector<pair<int, int>> moves {{0, 1}, {1, 0}, {1, 1}, {1, -1}};

bool is_inside (int i, int j) {
    return 0 <= i && i < l && 0 <= j && j < c;
}

int main () {_
    cin >> l >> c;
    
    for (int i = 0; i < l; i++) {
        cin >> grid[i];
    }
    
    cin >> n;
    
    while (n--) {
        cin >> word;
        
        memset(mark, 0, sizeof(mark));
        sort(word.begin(), word.end());
        
        for (int i = 0; i < l; i++) {
            for (int j = 0; j < c; j++) {
                for (auto [di, dj]: moves) {
                    int ni = i, nj = j;
                    string str = "";
                    
                    for (int k = 0; k < word.size() && is_inside(ni, nj); k++, ni += di, nj += dj) {
                        str += grid[ni][nj];
                    }
                    
                    sort(str.begin(), str.end());
                    
                    if (str == word) {
                        ni = i, nj = j;
                        
                        for (int k = 0; k < word.size(); k++, ni += di, nj += dj) {
                            mark[ni][nj] = 1;
                        }
                    }
                }
            }
        }
        
        for (int i = 0; i < l; i++) {
            for (int j = 0; j < c; j++) {
                cells[i][j] += mark[i][j];
            }
        }
    }
    
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            ans += (cells[i][j] > 1);
        }
    }
    
    cout << ans << "\n";
}
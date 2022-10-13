# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

int c, n;
map<string, int> cnt;
pair<string, int> ans = {" ", 0};
string s;

int main () {_
    cin >> n >> c;
    
    for (int i = 0; i < n; i++) {
        cin >> s;
        
        int pos = s.find("*");
        
        for (char ch = 'a'; ch <= 'z'; ch++) {
            s[pos] = ch;
            cnt[s]++;
        }
    }
    
    for (auto [k, v]: cnt) {
        if (v > ans.second) {
            ans = {k, v};
        }
    }
    
    cout << ans.first << " " << ans.second << "\n";
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

bool maria_loses;
int ans = -1, common, joao[2], maria[2], n, sum_joao, sum_maria;
map<int, int> remaining;

int main () {_
    cin >> n;
    
    for (int i = 1; i <= 13; i++) {
        remaining[i] = 4;
    }
    
    for (int i = 0; i < 2; i++) {
        cin >> joao[i];
        remaining[joao[i]]--;
        sum_joao += min(joao[i], 10);
    }
    
    for (int i = 0; i < 2; i++) {
        cin >> maria[i];
        remaining[maria[i]]--;
        sum_maria += min(maria[i], 10);
    }
    
    for (int i = 0; i < n; i++) {
        cin >> common;
        remaining[common]--;
        sum_joao += min(common, 10);
        sum_maria += min(common, 10);
        
        if (sum_maria > 23 || (sum_joao == 23 && sum_maria != 23)) {
            maria_loses = true;
        }
    }
    
    if (!maria_loses) {
        for (int i = 13; i >= 1; i--) {
            if (remaining[i]) {
                if (sum_maria + min(i, 10) == 23 || (sum_joao + min(i, 10) > 23 && sum_maria + min(i, 10) <= 23)) {
                    ans = i;
                }
            }
        }
    }
    
    cout << ans << "\n";
}
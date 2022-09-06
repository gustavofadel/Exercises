# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

const int L = 2e5 + 10;

int b, l, sum;
vector<int> d(L);

int main () {_
    cin >> b >> l;
    
    int mod = b + 1, sign = -1;
    
    for (int i = 1; i <= l; i++) {
        cin >> d[i];
        sum = (sum + sign * d[i]) % mod;
        sign *= -1;
    }
    
    sum = (sum + mod) % mod;
    
    // [(sum of digits in even positions) - (sum of digits in odd positions)] % mod must be equal to 0
    if (sum == 0) {
        return !(cout << "0 0\n");
    }
    
    int needed_even = sum, needed_odd = mod - sum;
    
    // Check the leftmost digit that can be decremented to make the expression on line 25 true
    for (int i = 1; i <= l; i++) {
        if (i & 1 && d[i] >= needed_odd) {
            return !(cout << i << " " << d[i] - needed_odd << "\n");
        }
        
        else if (!(i & 1) && d[i] >= needed_even) {
            return !(cout << i << " " << d[i] - needed_even << "\n");
        }
    }
    
    return !(cout << "-1 -1\n");
}
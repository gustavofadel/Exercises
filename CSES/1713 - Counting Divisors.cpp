# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, x;

int divisors (int x) {
    int cnt = 0;
    
    for (int i = 1; i <= sqrt(x); i++) {
        if (x % i == 0) cnt += (x / i == i ? 1 : 2);
    }
    
    return cnt;
}

int main () {_
    cin >> n;
    
    while (n--) {
        cin >> x;
        cout << divisors(x) << "\n";
    }
    
    return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAX = 41;

int fib[MAX], calls[MAX], n, x;

int main () {_
    fib[0] = 0, fib[1] = 1;
    
    for (int i = 2; i < MAX; i++) fib[i] = fib[i - 1] + fib[i - 2];
    for (int i = 0; i < MAX - 1; i++) calls[i] = 2 * fib[i + 1] - 2;
    
    cin >> n;
    
    while (n--) cin >> x, cout << "fib(" << x << ") = " << calls[x] << " calls = " << fib[x] << "\n";
}
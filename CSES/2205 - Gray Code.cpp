# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

int n;

int main () {_
    cin >> n;
    
    for (int i = 0; i < (1 << n); i++) {
        bitset<32> bs(i ^ (i >> 1));
        cout << bs.to_string().substr(32 - n) << "\n";
    }
}
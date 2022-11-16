# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

const int K = 26;
const int N = 2e5 + 10;

int a, b, lg[N], n, q, st[N][K], x[N];

int main () {_
    cin >> n >> q;
    
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    
    for (int i = 2; i < N; i++) {
        lg[i] = lg[i >> 1] + 1;
    }
    
    for (int i = 0; i < n; i++) {
        st[i][0] = x[i];
    }
    
    for (int j = 1; j < K; j++) {
        for (int i = 0; i + (1 << j) < N; i++) {
            st[i][j] = min(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
        }
    }
    
    while (q--) {
        cin >> a >> b; a--, b--;
        cout << min(st[a][lg[b - a + 1]], st[b - (1 << lg[b - a + 1]) + 1][lg[b - a + 1]]) << "\n";
    }
}
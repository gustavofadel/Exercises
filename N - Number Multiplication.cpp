# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

typedef long long ll;

const int MAXN = 1e3 + 10;
const ll MAXC = 1e15;

int d, j = 1, K, M, m, N, n;
ll ans[MAXN], c[MAXN];
vector<int> g[MAXN];

int main () {_
    cin >> M >> N >> K;
    
    for (int i = 1; i <= N; i++) {
        cin >> c[i];
    }
    
    while (K--) {
        cin >> m >> n >> d;
        g[m].push_back(n);
    } 
    
    for (int i = 2; i <= ceil(sqrt(MAXC)) && j <= M; i++) {
        // If the next M-vertex has been found
        if (c[g[j][0]] % i == 0) {
            // Iterates over all N-vertices linked to that M-vertex
            for (int vtx: g[j]) {
                // Removes all M-vertex factors from the N-vertex
                while (c[vtx] % i == 0) {
                    c[vtx] /= i;
                }
            }
            
            ans[j++] = i;
        }
    }
    
    // Check the remaining M-vertices
    while (j <= M) {
        ans[j] = c[g[j][0]];
        j++;
    }
    
    for (int i = 1; i < j; i++) {
        cout << ans[i] << " \n"[i == j - 1];
    }
}
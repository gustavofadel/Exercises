# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

const int N = 1e5 + 10;

int dead[N], id = 2, monarch = 1, parent[N], q, t, x;
queue<int> graph[N];

int main () {_
    cin >> q;
    
    while (q--) {
        cin >> t >> x;
        
        if (t == 1) {
            parent[id] = x;
            graph[x].push(id++);
        }
        
        else {
            dead[x] = 1;
            
            // Looks like a pre-order traversal to find the lowest alive identifier
            while (dead[monarch]) {
                if (graph[monarch].empty()) {
                    monarch = parent[monarch];
                }
                
                else {
                    int next_monarch = graph[monarch].front();
                    graph[monarch].pop();
                    monarch = next_monarch;
                }
            }
            
            cout << monarch << "\n";
        }
    }
}
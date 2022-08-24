# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

int answer, f, n, s, t;

int main () {_
    cin >> n >> s, answer = s; 
    for (int i = 0; i < n; cin >> f >> t, answer = max(answer, f + t), i++); 
    cout << answer << "\n";
}
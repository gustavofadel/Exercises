# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 5e1 + 10;

int h[MAXN], n, t;
string s;

int main () {_
  cin >> t;
  
  while (t--) {
    int cnt = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; cin >> h[i++]); cin >> s;
    for (int i = 0; i < n; cnt += ((h[i] > 2 && s[i] == 'J') || (h[i] <= 2 && s[i] == 'S')), i++);
    
    cout << cnt << "\n";
  }
  
  return 0;
}
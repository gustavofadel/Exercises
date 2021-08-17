# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, x;

int main () {_
  while (cin >> n && n) {
    queue<int> q;
    
    for (int i = 1; i <= n; i++) {
      q.push(i);
    }
    
    cout << "Discarded cards:";
    
    while (q.size() > 1) {
      x = q.front(); q.pop(); cout << " " << x << (q.size() == 1 ? "" : ",");
      x = q.front(); q.pop(); q.push(x);
    }
    
    cout << "\nRemaining card: " << q.front() << "\n";
  }
  
  return 0;
}
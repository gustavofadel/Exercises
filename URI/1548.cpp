# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, t;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> n;
    
    int cnt = 0;
    vector<int> v1(n), v2(n);
    
    for (int i = 0; i < n; i++) {
      cin >> v1[i]; v2[i] = v1[i];
    }
    
    sort(v2.begin(), v2.end(), greater<int>());
    
    for (int i = 0; i < n; i++) {
      cnt += (v1[i] == v2[i]);
    }
    
    cout << cnt << "\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e2 + 10;

int m, mat[MAXN][MAXN], n;

int main () {
  while (cin >> n >> m && (n || m)) {
    bool flag;
    int cnt = 0;
    map<int, int> contestants, problems;
    
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> mat[i][j]; 
        contestants[i] += mat[i][j];
        problems[j] += mat[i][j];
      }
    }
    
    flag = false;
    
    for (int i = 0; i < n && !flag; i++) {
      flag |= (contestants[i] == m);
    }
    
    cnt += !flag; flag = false;
    
    for (int j = 0; j < m && !flag; j++) {
      flag |= (problems[j] == 0);
    }
    
    cnt += !flag; flag = false;
    
    for (int j = 0; j < m && !flag; j++) {
      flag |= (problems[j] == n);
    }
    
    cnt += !flag; flag = false;
    
    for (int i = 0; i < n && !flag; i++) {
      flag |= (contestants[i] == 0);
    }
    
    cnt += !flag; cout << cnt << "\n";
  }
  
  return 0;
}
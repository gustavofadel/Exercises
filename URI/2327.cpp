# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 10;

bool magic = true;
int mat[MAXN][MAXN], n, s1, s2;

int main () {_
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    s2 = 0;
    
    for (int j = 0; j < n; j++) {
      cin >> mat[i][j];
      (!i ? s1 : s2) += mat[i][j];  
    }
    
    if (i && s1 != s2) magic = false;
  }
  
  for (int j = 0; j < n && magic; j++) {
    s2 = 0;
    
    for (int i = 0; i < n && magic; i++) {
      s2 += mat[i][j];
    }
    
    if (s1 != s2) magic = false;
  }
  
  s2 = 0; 
  
  for (int i = 0; i < n && magic; i++) {
    s2 += mat[i][i];
  }
  
  magic &= (s1 == s2);
  
  s2 = 0; 
  
  for (int i = 0; i < n && magic; i++) {
    s2 += mat[i][n - i - 1];
  }
  
  magic &= (s1 == s2);
  
  return cout << (magic ? s1 : -1) << "\n", 0;
}
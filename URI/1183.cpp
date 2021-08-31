# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

char op;
float mat[12][12], sum;
int cnt;

int main () {_
  cin >> op;
  
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      cin >> mat[i][j];
      
      if (i < j) {
        cnt++; sum += mat[i][j];
      }
    }
  }
  
  cout << fixed << setprecision(1) << (op == 'S' ? sum : sum / cnt) << "\n";
  
  return 0;
}
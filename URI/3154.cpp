# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

float res = 1;
int d, p;

int main () {_
  cin >> d >> p;
  
  for (int i = 1; i < p; i++) {
    res *= (1 - (float) i / d);
  }
  
  cout << fixed << setprecision(2) << (1 - res) * 100 << "\n";
  
  return 0;
}
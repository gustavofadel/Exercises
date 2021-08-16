# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

double m;
int d, n;
string s;

int main () {_
  while (getline(cin, s) && cin >> d) {
    cin.ignore(); m += d; n++;
  }
  
  cout << fixed << setprecision(1) << m / n << "\n";
  
  return 0;
}
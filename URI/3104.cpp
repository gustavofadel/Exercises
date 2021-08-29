# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

ll b, rem;
string a;

int main () {_
  cin >> a >> b;
  
  for (int i = 0; i < a.size(); i++) {
    rem = (rem * 10 + (a[i] - '0')) % b;
  }
  
  cout << rem << "\n";
  
  return 0;
}
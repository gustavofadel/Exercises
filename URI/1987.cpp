# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;
string s;

int main () {_
  while (cin >> n >> s) {
    int sum = 0;
    
    for (int i = 0; i < s.size(); sum += s[i++] - '0');
    
    cout << sum << " " << (sum % 3 == 0 ? "sim" : "nao") << "\n";
  }
  
  return 0;
}
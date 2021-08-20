# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, t;
string s1, s2;

int main () {_
  cin >> t;
  
  while (t--) {
    int cnt = 0;
    
    cin >> n >> s1; s2 = s1; sort(s2.begin(), s2.end());
    
    for (int i = 0; i < n && cnt < 3; i++) {
      cnt += (s1[i] != s2[i]);
    }
    
    cout << (cnt == 2 ? "There are the chance." : "There aren't the chance.") << "\n";
  }
  
  return 0;
}
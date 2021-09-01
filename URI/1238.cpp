# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t;
string s1, s2;

int main () {_
  cin >> t;
  
  while (t--) {
    int i, j;
    
    cin >> s1 >> s2;
    
    for (i = 0, j = 0; i < s1.size() && j < s2.size(); i++, j++) {
      cout << s1[i] << s2[j];
    }
    
    while (i < s1.size()) {
      cout << s1[i++];
    }
    
    while (j < s2.size()) {
      cout << s2[j++];
    }
    
    cout << "\n";
  }
  
  return 0;
}
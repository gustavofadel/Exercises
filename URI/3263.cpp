# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool succeeded = true;
int n;
string s1, s2;

int main () {_
  cin >> n >> s1 >> s2;
  
  for (int i = 0; i < s1.size() && succeeded; i++) {
    succeeded &= (n & 1 ? s1[i] != s2[i] : s1[i] == s2[i]);
  }
  
  cout << (succeeded ? "Deletion succeeded" : "Deletion failed") << "\n";
  
  return 0;
}
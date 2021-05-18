# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;
set<string> permutations;
string s;

int main () {_
  cin >> s;
  
  sort(s.begin(), s.end());
  
  do {
    permutations.insert(s);
  } while (next_permutation(s.begin(), s.end()));
  
  cout << permutations.size() << "\n";
  
  for (string permutation: permutations) {
    cout << permutation << "\n";
  }
  
  return 0;
}
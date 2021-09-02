# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool first = true;
int n;

int main () {_
  while (cin >> n && n) {
    if (!first) {
      cout << "\n";
    }
    
    first = false;
    
    int len = 0;
    vector<string> vet(n);
    
    for (int i = 0; i < n; i++) {
      cin >> vet[i]; len = max(len, (int) vet[i].size());
    }
    
    for (string s: vet) {
      cout << setw(len) << s << "\n";
    }
  }
  
  return 0;
}
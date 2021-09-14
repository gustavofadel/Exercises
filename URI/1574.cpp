# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e2 + 10;

int n, t;
string s, vet[MAXN];

int main () {_
  cin >> t;
  
  while (t--) {
    int pos = 0;
    
    cin >> n; cin.ignore();
    
    for (int i = 1; i <= n; i++) {
      getline(cin, s);
      
      if (s[0] != 'S') {
        vet[i] = s;
      }
      
      else {
        vet[i] = vet[stoi(s.substr(8, s.size()))];
      }
      
      pos += (vet[i] == "LEFT" ? -1 : 1);
    }
    
    cout << pos << "\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string s;

int main () {_
  while (cin >> s) {
    vector<int> vet;
    
    for (int i = 0; i < 9; vet.push_back(s[i++] - '0'));
    
    int d1 = 0; for (int i = 0; i < 9; d1 += (i + 1) * vet[i++]); d1 = (d1 % 11) % 10;
    int d2 = 0; for (int i = 0; i < 9; d2 += (9 - i) * vet[i++]); d2 = (d2 % 11) % 10;
    
    for (int i = 0; i < 9; i++) {
      cout << vet[i];
      
      if ((i + 1) % 3 == 0) {
        cout << ".-"[i == 8];
      }
    }
    
    cout << d1 << d2 << "\n";
  }
  
  return 0;
}
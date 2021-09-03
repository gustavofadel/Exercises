# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, t;

int main () {_
  cin >> t;
  
  while (t--) {
    vector<string> vet;
    
    cin >> n;
    
    vector<string> freq(n), names(n);
    
    for (int i = 0; i < n; i++) {
      cin >> names[i];
    }
    
    for (int i = 0; i < n; i++) {
      int cnt = 0, tot = 0;
      
      cin >> freq[i];
      
      for (char c: freq[i]) {
        cnt += (c == 'P'); tot += (c != 'M');
      }
      
      if ((float) cnt / tot * 100 < 75) {
        vet.push_back(names[i]);
      }
    }
    
    for (int i = 0; i < vet.size(); i++) {
      if (i) {
        cout << " ";
      }
      
      cout << vet[i];
    }
    
    cout << "\n";
  }
  
  return 0;
}
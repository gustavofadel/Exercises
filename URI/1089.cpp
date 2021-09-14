# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;

int main () {_
  while (cin >> n && n) {
    int cnt = 0;
    vector<int> vet(n);
    
    for (int i = 0; i < n; cin >> vet[i++]);
    
    int first = vet.front(), last = vet.back();
    
    vet.insert(vet.begin(), last); vet.push_back(first);
    
    for (int i = 1; i < vet.size() - 1; i++) {
      if ((vet[i - 1] < vet[i] && vet[i] > vet[i + 1]) || (vet[i - 1] > vet[i] && vet[i] < vet[i + 1])) {
        cnt++;
      }
    }
    
    cout << cnt << "\n";
  }
  
  return 0;
}
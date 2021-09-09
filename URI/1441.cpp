# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int h;

int main () {_
  while (cin >> h && h) {
    int res = h;
    vector<int> vet{h};
    
    while (vet.back() != 1) {
      vet.push_back((vet.back() & 1 ? 3 * vet.back() + 1 : vet.back() / 2)); res = max(res, vet.back());
    }
    
    cout << res << "\n";
  }
  
  return 0;
}
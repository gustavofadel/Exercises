# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int c, m, n, tc;

int main () {_
  while (cin >> n && n) {
    int cur = 0;
    vector<int> vet;
    
    while (n--) {
      cin >> c >> m;
      if (m > cur) { cur = m; vet.clear(); }
      if (m == cur) vet.push_back(c);
    }
    
    cout << "Turma " << ++tc << "\n";
    for (int c: vet) cout << c << " ";
    cout << "\n\n";
  }
  
  return 0;
}
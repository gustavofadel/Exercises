# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXT = 1e4 + 11;

int n, t;
vector<int> vet(MAXT, 0);

int main () {_
  cin >> n;
  
  while (n--) {
    cin >> t; for (int i = t; i < t + 10; vet[i++] = 1);
  }
  
  cout << accumulate(vet.begin(), vet.end(), 0) << "\n";
  
  return 0;
}
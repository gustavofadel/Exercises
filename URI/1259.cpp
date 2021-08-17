# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, t;
vector<int> evens, odds;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> n; (n % 2 ? odds : evens).push_back(n);
  }
  
  sort(evens.begin(), evens.end()); sort(odds.begin(), odds.end(), greater<int>());
  
  for (int n: evens) {
    cout << n << "\n";
  }
  
  for (int n: odds) {
    cout << n << "\n";
  }
  
  return 0;
}
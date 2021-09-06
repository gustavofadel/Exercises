# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int res;

int main () {_
  for (int i = 0; i < 4; i++) {
    int sum = 0;
    
    for (int j = 0, x; j < 7; j++) {
      cin >> x; sum += x;
    }
    
    res = max(res, sum);
  }
  
  string bin = bitset<64>(res).to_string(); bin.erase(0, bin.find('1'));
  
  cout << res << " = " << bin << "\n";
  
  return 0;
}
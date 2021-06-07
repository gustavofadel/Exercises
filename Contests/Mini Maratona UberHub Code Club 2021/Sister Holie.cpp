# include <bits/stdc++.h>

using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int count = 0, n, outlet;
  
  cin >> n;
  
  while (n--) {
    cin >> outlet;
    
    if (!outlet) {
      count++;
    }
  }
  
  cout << count << "\n";
  
  return 0;
}
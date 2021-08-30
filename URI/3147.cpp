# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, e, h, o, w, x;

int main () {_
  cin >> h >> e >> a >> o >> w >> x;
  
  if (h + e + a > o + w) {
    cout << "Middle-earth is safe.\n";
  }
  
  else {
    cout << (h + e + a + x >= o + w ? "Middle-earth is safe." : "Sauron has returned.") << "\n";
  }
  
  return 0;
}
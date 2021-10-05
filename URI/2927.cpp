# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, c, x, y;

int main () {_
  cin >> a >> c >> x >> y;
  
  if (a < c - x - y) {
    cout << "Igor feliz!\n";
  }
  
  else if (x > y / 2.0) {
    cout << "Caio, a culpa eh sua!\n";
  }
  
  else {
    cout << "Igor bolado!\n";
  }
  
  return 0;
}
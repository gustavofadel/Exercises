# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int ax, ay, bx, by, cx, cy, dx, dy, n, rx, ry;

int main () {_
  cin >> n;
  
  while (n--) { 
    cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy >> rx >> ry;
    cout << int(ax <= rx && dx <= rx && rx <= bx && rx <= cx && ay <= ry && by <= ry && ry <= cy && ry <= dy) << "\n";
  }
  
  return 0;
}
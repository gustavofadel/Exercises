# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

float b, i, o;

int main () {_
  cin >> o >> b >> i;
  
  if (o < b && o < i) {
    cout << "Otavio\n";
  }
  
  else if (b < o && b < i) {
    cout << "Bruno\n";
  }
  
  else if (i < o && i < b) {
    cout << "Ian\n";
  }
  
  else {
    cout << "Empate\n";
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int aux, res, x;

int main () {_
  while (cin >> x) {
    if (aux && x < aux && !res) {
      res = aux;
    }
    
    aux = x;
  }
  
  return cout << (res ? ++res : ++x) << "\n", 0;
}
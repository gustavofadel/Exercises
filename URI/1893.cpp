# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, b;

int main () {_
  cin >> a >> b;
  
  if (a < b) {
    if (b <= 2) {
      cout << "nova\n";
    }
    
    else if (b <= 96) {
      cout << "crescente\n";
    }
    
    else {
      cout << "cheia\n";
    }
  }
  
  else {
    if (b >= 97) {
      cout << "cheia\n";
    }
    
    else if (b >= 3) {
      cout << "minguante\n";
    }
    
    else {
      cout << "nova\n";
    }
  }
  
  return 0;
}
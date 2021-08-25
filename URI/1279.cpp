# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool divisible (string s, int n) {
  int rem = 0;
  
  for (int i = 0; i < s.size(); i++) {
    rem = (rem * 10 + (s[i] - '0')) % n;
  }
  
  return (rem == 0);
}

bool bulukulu, first = true, huluculu, leap;
string s;

int main () {_
  while (cin >> s) {
    if (!first) {
      cout << "\n";
    }
    
    first = false;
    leap = ((divisible(s, 4) && !divisible(s, 100)) || divisible(s, 400));
    bulukulu = (divisible(s, 55) && leap);
    huluculu = divisible(s, 15);
    
    if (!leap && !huluculu) {
      cout << "This is an ordinary year.\n";
      continue;
    }
    
    if (leap) {
      cout << "This is leap year.\n";
    }
    
    if (huluculu) {
      cout << "This is huluculu festival year.\n";
    }
    
    if (bulukulu) {
      cout << "This is bulukulu festival year.\n";
    }
  }
  
  return 0;
}
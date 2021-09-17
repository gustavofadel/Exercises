# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;
string s1, s2;

int main () {_
  while (cin >> n) {
    map<string, int> mp;
    
    while (n--) {
      cin >> s1 >> s2; mp[(s2 == "EPR" || s2 == "EHD" ? s2 : "INTRUSOS")]++;
    }
    
    cout << "EPR: " << mp["EPR"] << "\nEHD: " << mp["EHD"] << "\nINTRUSOS: " << mp["INTRUSOS"] << "\n";
  }
  
  return 0;
}
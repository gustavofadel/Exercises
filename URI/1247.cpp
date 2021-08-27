# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

float d, vf, vg;

int main () {_
  while (cin >> d >> vf >> vg) {
    float tf = 12 / vf, tg = hypotf(d, 12) / vg;
    cout << (tg <= tf ? "S" : "N") << "\n";
  } 
  
  return 0;
}
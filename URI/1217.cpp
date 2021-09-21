# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

float price, v;
int days, t, weight;
string line, s;

int main () {_
  cin >> t;
  
  while (t--) {
    int today = 0;
    
    cin >> v; price += v;
    cin.ignore(); getline(cin, line);
    
    stringstream ss(line);
    
    while (ss >> s) {
      today++;
    }
    
    cout << "day " << ++days << ": " << today << " kg\n"; weight += today;
  }
  
  cout << fixed << setprecision(2);
  cout << (float) weight / days << " kg by day\n";
  cout << "R$ " << price / days << " by day\n";
  
  return 0;
}
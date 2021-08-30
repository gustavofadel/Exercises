# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t;
pair<int, int> vet[3];

float area () {
  float left = 0, right = 0;
  
  for (int i = 0; i < 3; i++) {
    left += vet[i].first * vet[(i + 1) % 3].second;
    right += vet[(i + 1) % 3].first * vet[i].second;
  }
  
  return 0.5 * abs(left - right);
}

int main () {_
  cin >> t; cout << fixed << setprecision(3);
  
  while (t--) {
    for (int i = 0; i < 3; i++) {
      cin >> vet[i].first >> vet[i].second;
    }
    
    cout << area() << "\n";
  }
  
  return 0;
}
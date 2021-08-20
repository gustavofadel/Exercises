# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

bool first;
int city = 1, n, qtd, x, y;
ll sum;

int main () {_
  while (cin >> n && n) {
    if (city > 1) {
      cout << "\n";
    }
    
    map<int, int> mp;
    vector<pair<int, int>> vet;
    
    first = true; qtd = sum = 0;
    
    while (n--) {
      cin >> x >> y; mp[y / x] += x; qtd += x; sum += y;
    }
    
    for (auto [k, v]: mp) {
      vet.push_back({k, v});
    }
    
    sort(vet.begin(), vet.end());
    
    cout << "Cidade# " << city++ << ":\n";
    
    for (auto p: vet) {
      if (!first) {
        cout << " ";
      }
      
      cout << p.second << "-" << p.first; first = false;
    }
    
    cout << fixed << setprecision(2) << "\nConsumo medio: " << floor((double) sum / qtd * 100) / 100.0 << " m3.\n";
  }
  
  return 0;
}
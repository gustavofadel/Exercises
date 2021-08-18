# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct Reindeer {
  float height;
  int age, weight;
  string name;
};

int m, n, t;

bool cmp (Reindeer r1, Reindeer r2) {
  if (r1.weight != r2.weight) {
    return r1.weight > r2.weight;
  }
  
  if (r1.age != r2.age) {
    return r1.age < r2.age;
  }
  
  if (r1.height != r2.height) {
    return r1.height < r2.height;
  }
  
  return r1.name < r2.name;
}

int main () {_
  cin >> t;
  
  for (int tc = 1; tc <= t; tc++) {
    cin >> n >> m;
    
    Reindeer r[n];
    
    for (int i = 0; i < n; i++) {
      cin >> r[i].name >> r[i].weight >> r[i].age >> r[i].height;
    }
    
    sort(r, r + n, cmp);
    
    cout << "CENARIO {" << tc << "}\n";
    
    for (int i = 0; i < m; i++) {
      cout << i + 1 << " - " << r[i].name << "\n";
    }
  }
  
  return 0;
}
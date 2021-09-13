# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 5e2 + 10;

struct Country {
  int gold, silver, bronze;
  string name;
};

Country vet[MAXN];
int n;

bool cmp (Country c1, Country c2) {
  if (c1.gold != c2.gold) {
    return c1.gold > c2.gold;
  }
  
  if (c1.silver != c2.silver) {
    return c1.silver > c2.silver;
  }
  
  if (c1.bronze != c2.bronze) {
    return c1.bronze > c2.bronze;
  }
  
  return c1.name < c2.name;
}

int main () {_
  cin >> n;
  
  for (int i = 0; i < n; cin >> vet[i].name >> vet[i].gold >> vet[i].silver >> vet[i++].bronze);
  
  sort(vet, vet + n, cmp);
  
  for (int i = 0; i < n; cout << vet[i].name << " " << vet[i].gold << " " << vet[i].silver << " " << vet[i++].bronze << "\n");
  
  return 0;
}
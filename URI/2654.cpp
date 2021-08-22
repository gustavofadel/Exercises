# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct Candidate {
  int died, killed, power;
  string name;
};

int n;

bool cmp (Candidate c1, Candidate c2) {
  if (c1.power != c2.power) {
    return c1.power > c2.power;
  }
  
  if (c1.killed != c2.killed) {
    return c1.killed > c2.killed;
  }
  
  if (c1.died != c2.died) {
    return c1.died < c2.died;
  }
  
  return c1.name < c2.name;
}

int main () {_
  cin >> n;
  
  Candidate vet[n];
  
  for (int i = 0; i < n; i++) {
    cin >> vet[i].name >> vet[i].power >> vet[i].killed >> vet[i].died;
  }
  
  sort(vet, vet + n, cmp);
  
  cout << vet[0].name << "\n";
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct Student {
  char region;
  int distance;
  string name;
};

int n;

bool cmp (Student s1, Student s2) {
  if (s1.distance != s2.distance) {
    return s1.distance < s2.distance;
  }
  
  if (s1.region != s2.region) {
    return s1.region < s2.region;
  }
  
  return s1.name < s2.name;
}

int main () {_
  while (cin >> n) {
    Student vet[n];
    
    for (int i = 0; i < n; i++) {
      cin >> vet[i].name >> vet[i].region >> vet[i].distance;
    }
    
    sort(vet, vet + n, cmp);
    
    for (auto s: vet) {
      cout << s.name << "\n";
    }
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

struct Student {
  int age, height;
  string name;
};

bool comparison (const Student &a, const Student &b) {
  if (a.age != b.age) {
    return a.age < b.age;
  }
  
  if (a.height != b.height) {
    return a.height < b.height;
  }
  
  return a.name < b.name;
}

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  
  cin >> n;
  
  Student students[n];
  
  for (int i = 0; i < n; i++) {
    cin >> students[i].age >> students[i].height >> students[i].name;
  }
  
  sort(students, students + n, comparison);
  
  for (int i = 0; i < n; i++) {
    cout << students[i].name << "\n";
  }
  
  return 0;
}
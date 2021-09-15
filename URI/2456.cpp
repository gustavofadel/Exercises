# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool decreasing = true, increasing = true;
vector<int> vet(5);

int main () {_
  for (int i = 0; i < 5; cin >> vet[i++]);
  for (int i = 1; i < 5; increasing &= (vet[i] > vet[i++ - 1]));
  for (int i = 1; i < 5; decreasing &= (vet[i] < vet[i++ - 1]));
  
  cout << (increasing ? "C" : (decreasing ? "D" : "N")) << "\n";
  
  return 0;
}
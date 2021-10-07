# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int m, x;
string n;
vector<int> vet;

int main () {_
  cin >> n >> m;
  
  while (m--) {
    int rem = 0;
    
    cin >> x;
    
    for (char c: n) {
      rem = ((rem << 1) + (c - '0')) % x;
    }
    
    if (!rem) vet.push_back(x);
  }
  
  if (!vet.size()) cout << "Nenhum\n";
  
  else {
    sort(vet.begin(), vet.end());
    for (int i = 0; i < vet.size(); cout << vet[i] << " \n"[i == vet.size() - 1], i++); 
  }
  
  return 0;
}
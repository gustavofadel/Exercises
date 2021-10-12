# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string line;

int main () {_
  while (cin >> line) {
    int n = line.size();
    string s = "";
    vector<string> vet;
    
    for (int i = 0; i < n; i++) {
      if (!isdigit(line[i])) { vet.push_back(s); s = ""; }
      else if (i == n - 1) vet.push_back(s + line[i]);
      else s += line[i];
    }
    
    for (int i = 0; i < 3; i++) reverse(vet[i].begin(), vet[i].end());
    
    cout << (stoi(vet[0]) + stoi(vet[1]) == stoi(vet[2]) ? "True" : "False") << "\n";
  }
  
  return 0;
}
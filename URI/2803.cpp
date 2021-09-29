# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string state;
vector<string> north{"acre", "amapa", "amazonas", "para", "rondonia", "roraima", "tocantins"};

int main () {_
  getline(cin, state); return cout << (find(north.begin(), north.end(), state) == north.end() ? "Outra regiao" : "Regiao Norte") << "\n", 0;
}
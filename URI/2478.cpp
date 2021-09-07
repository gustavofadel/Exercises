# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;
map<string, vector<string>> mp;
string s1, s2;
vector<string> vet(3);

int main () {_
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    cin >> s1 >> vet[0] >> vet[1] >> vet[2]; mp[s1] = vet;
  }
  
  while (cin >> s1 >> s2) {
    cout << (find(mp[s1].begin(), mp[s1].end(), s2) == mp[s1].end() ? "Tente Novamente!" : "Uhul! Seu amigo secreto vai adorar o/") << "\n";
  }
  
  return 0;
}
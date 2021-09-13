# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string s;
vector<int> vet;

int main () {_
  cin >> s; cout << fixed << setprecision(2);
  
  for (int i = 0; i < s.size(); i++) {
    if (s[i + 1] == '0') {
      vet.push_back(10); i++;
    }
    
    else {
      vet.push_back(s[i] - '0');
    }
  }
  
  cout << (float) accumulate(vet.begin(), vet.end(), 0) / vet.size() << "\n";
  
  return 0;
}
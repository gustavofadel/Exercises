# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 1e5 + 10;

int n;
string s;
vector<bool> is_prime(MAXN, true);

int main () {_
  is_prime[0] = is_prime[1] = false;
  
  for (int i = 2; i * i < MAXN; i++) {
    if (is_prime[i]) {
      for (int j = i * i; j < MAXN; j += i) {
        is_prime[j] = false;
      }
    }
  }
  
  while (cin >> s) {
    bool super = true;
    
    n = stoi(s);
    
    if (!is_prime[n]) {
      cout << "Nada\n";
      continue;
    }
    
    for (int i = 0; i < s.size() && super; i++) {
      if (!is_prime[s[i] - '0']) {
        super = false;
      }
    }
    
    cout << (super ? "Super" : "Primo") << "\n";
  }
  
  return 0;
}
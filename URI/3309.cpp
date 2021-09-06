# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int cnt, n, x;
map<int, bool> mp;
vector<int> vet{1, 4, 16, 20, 37, 42, 58, 89, 145};

int squares_sum (string s) {
  int res = 0;
  
  for (char c: s) {
    res += pow(c - '0', 2);
  }
  
  return res;
}

bool is_happy (int n) {
  while (find(vet.begin(), vet.end(), n) == vet.end()) {
    n = squares_sum(to_string(n));
  }
  
  return (n == 1);
}

int main () {_
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    cin >> x;
    
    if (!mp.count(x)) {
      mp[x] = is_happy(x);
    }
    
    cnt += mp[x];
  }
  
  cout << cnt << "\n";
  
  return 0;
}
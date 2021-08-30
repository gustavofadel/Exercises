# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

int b, n;
ll den = 1, fat[21], num, sum;
map<string, int> mp;
string s;

int main () {_
  fat[0] = 1;
  
  for (ll i = 1; i < 21; i++) {
    fat[i] = fat[i - 1] * i;
  }
  
  cin >> n;
  
  while (n--) {
    cin >> s >> b; mp[s] += b; sum += b;
  }
  
  num = fat[sum];
  
  for (auto [k, v]: mp) {
    den *= fat[v];
  }
  
  cout << "Feliz aniversario Tobias!\n" << num / den << "\n";
  
  return 0;
}
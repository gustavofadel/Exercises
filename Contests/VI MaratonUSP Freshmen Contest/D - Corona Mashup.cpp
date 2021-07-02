# include <bits/stdc++.h>
 
using namespace std;
 
# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long
 
int n;
ll a, best = -1, participants;
map<ll, ll> mp;
 
int main () {_
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    cin >> a; mp[a]++;
  }
  
  for (auto [k, v]: mp) {
    participants += v;
    
    if (participants % 3 == 0) {
      best = k;
    }
  }
  
  cout << best << "\n";
  
  return 0;
}
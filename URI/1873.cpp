# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t;
map<string, pair<string, string>> mp;
string rajesh, sheldon;

int main () {_
  mp["pedra"] = {"lagarto", "tesoura"}; mp["papel"] = {"pedra", "spock"};
  mp["tesoura"] = {"papel", "lagarto"}; mp["lagarto"] = {"spock", "papel"};
  mp["spock"] = {"tesoura", "pedra"};
  
  cin >> t;
  
  while (t--) {
    cin >> rajesh >> sheldon;
    
    if (rajesh == mp[sheldon].first || rajesh == mp[sheldon].second) {
      cout << "sheldon\n";
    }
    
    else if (sheldon == mp[rajesh].first || sheldon == mp[rajesh].second) {
      cout << "rajesh\n";
    }
    
    else {
      cout << "empate\n";
    }
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int am, av, em, ev, rm, rv, t_m, t_v;
string s;

int main () {_
  cin >> am >> rm >> em >> av >> rv >> ev; cin.ignore(); getline(cin, s);
  t_m = 2 * am + rm + em * s.size(); t_v = 2 * av + rv + ev * s.size();
  cout << (t_m < t_v ? "Matheus" : (t_m == t_v ? "Empate" : "Vinicius")) << "\n";
  
  return 0;
}
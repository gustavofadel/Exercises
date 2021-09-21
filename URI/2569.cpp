# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string a, b, c, op;

int main () {_
  cin >> a >> op >> b;
  
  for (int i = 0; i < a.size(); i++) {
    a[i] = (a[i] == '7' ? '0' : a[i]);
  }
  
  for (int i = 0; i < b.size(); i++) {
    b[i] = (b[i] == '7' ? '0' : b[i]);
  }
  
  c = (op == "+" ? to_string(stoi(a) + stoi(b)) : to_string(stoi(a) * stoi(b)));
  
  for (int i = 0; i < c.size(); i++) {
    c[i] = (c[i] == '7' ? '0' : c[i]);
  }
  
  cout << stoi(c) << "\n";
  
  return 0;
}
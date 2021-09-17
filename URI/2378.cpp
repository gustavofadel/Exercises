# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool exceeded;
int c, cur = 0, e, n, s;

int main () {_
  cin >> n >> c;
  
  while (n--) {
    cin >> s >> e; cur += (e - s); exceeded |= (cur > c);
  }
  
  cout << "NS"[exceeded] << "\n";
  
  return 0;
}
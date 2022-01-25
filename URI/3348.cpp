# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

typedef long long ll;

int n;
ll res[19] = {2, 7, 5, 30, 169, 441, 1872, 7632, 1740, 93313, 459901, 1358657, 2504881, 13482720, 25779600, 68468401, 610346880, 1271932200, 327280800};

int main () {_
  cin >> n;
  
  return cout << res[--n] << "\n", 0;
}
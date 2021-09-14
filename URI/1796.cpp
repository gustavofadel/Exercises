# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXN = 233e3 + 10;

int n, vet[MAXN];

int main () {_
  while (cin >> n) {
    int cnt = 0;
    for (int i = 0; i < n; cin >> vet[i], cnt += vet[i++]);
    cout << "YN"[cnt >= 0.5 * n] << "\n";
  }
  
  return 0;
}
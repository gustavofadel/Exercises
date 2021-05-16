# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define MAXN 100010

int a[MAXN], n;

int main () {_
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  if (prev_permutation(a, a + n)) {
    for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }
    
    cout << "\n";
  }
  
  else {
    cout << "-1\n";
  }

  return 0;
}
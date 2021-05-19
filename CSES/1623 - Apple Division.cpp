# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long
# define MAXN 21

int n;
ll a[MAXN], totalSum;

ll minimumDifference (int i, ll currentSum) {
  if (i == 0) {
    return abs((totalSum - currentSum) - currentSum);
  }
  
  return min(minimumDifference(i - 1, currentSum + a[i - 1]), minimumDifference(i - 1, currentSum));
}

int main () {_
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    totalSum += a[i];
  }
  
  cout << minimumDifference(n, 0) << "\n";

  return 0;
}
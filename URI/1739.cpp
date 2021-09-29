# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
# define ll long long

bool check (string num) {
  int sum = 0;
  
  for (char digit: num) {
    if (digit == '3') return true;
    sum += (digit - '0');
  }
  
  return sum % 3 == 0;
}

int n;
vector<ll> fibonacci, threebonacci;

int main () {_
  fibonacci.push_back(1); fibonacci.push_back(1);
  
  while (threebonacci.size() < 60) {
    fibonacci.push_back(fibonacci[fibonacci.size() - 1] + fibonacci[fibonacci.size() - 2]);
    if (check(to_string(fibonacci.back()))) threebonacci.push_back(fibonacci.back());
  }
  
  while (cin >> n) cout << threebonacci[--n] << "\n";
  
  return 0;
}
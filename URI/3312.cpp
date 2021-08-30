# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXLEN = 2e2 + 10;

int multiply (int x, int vet[], int len) {
  int carry = 0;
  
  for (int i = 0; i < len; i++) {
    int prod = vet[i] * x + carry;
    vet[i] = prod % 10; carry = prod / 10;
  }
  
  while (carry) {
    vet[len++] = carry % 10; carry /= 10;
  }
  
  return len;
}

void factorial (int n) {
  int len = 1, res[MAXLEN]; res[0] = 1;
  
  for (int i = 2; i <= n; i++) {
    len = multiply(i, res, len);
  }
  
  for (int i = len - 1; i >= 0; i--) {
    cout << res[i];
  }
  
  cout << "\n";
}

int n, x;
vector<bool> is_prime(101, true);

int main () {_
  is_prime[0] = is_prime[1] = false;
  
  for (int i = 2; i * i < 101; i++) {
    if (is_prime[i]) {
      for (int j = i * i; j < 101; j += i) {
        is_prime[j] = false;
      }
    }
  }
  
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    cin >> x;
    
    if (is_prime[x]) {
      cout << x << "! = "; factorial(x);
    }
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

using cd = complex<double>;
using ll = long long;

const double PI = acos(-1);
const int MAXN = 2e5 + 10;

int reverse (int num, int lg_n) {
  int res = 0;
  
  for (int i = 0; i < lg_n; i++) {
    if (num & (1 << i)) {
      res |= 1 << (lg_n - 1 - i);
    }
  }
  
  return res;
}

void fft (vector<cd> &a, bool invert) {
  int lg_n = 0, n = a.size();
  
  while ((1 << lg_n) < n) {
    lg_n++;
  }
  
  for (int i = 0; i < n; i++) {
    if (i < reverse(i, lg_n)) {
      swap(a[i], a[reverse(i, lg_n)]);
    }
  }
  
  for (int len = 2; len <= n; len <<= 1) {
    double ang = 2 * PI / len * (invert ? -1 : 1);
    cd wlen(cos(ang), sin(ang));
    
    for (int i = 0; i < n; i += len) {
      cd w(1);
      
      for (int j = 0; j < len / 2; j++) {
        cd u = a[i + j], v = a[i + j + len / 2] * w;
        a[i + j] = u + v;
        a[i + j + len / 2] = u - v;
        w *= wlen;
      }
    }
  }
  
  if (invert) {
    for (cd &x: a) {
      x /= n;
    }
  }
}

vector<ll> multiply (vector<ll> const& a, vector<ll> const& b) {
  int n = 1;
  vector<cd> fa(a.begin(), a.end()), fb(b.begin(), b.end());
  
  while (n < a.size() + b.size()) {
    n <<= 1;
  }
  
  fa.resize(n); fb.resize(n);
  
  fft(fa, false); fft(fb, false);
  
  for (int i = 0; i < n; i++) {
    fa[i] *= fb[i];
  }
  
  fft(fa, true);
  
  vector<ll> result(n);
  
  for (int i = 0; i < n; i++) {
    result[i] = round(fa[i].real());
  }
  
  return result;
}

int abc[3], h, wins = 0;
ll total[MAXN];
string lavos = "RNE", omnislash = "ABC", p, t;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  for (int i = 0; i < 3; i++) {
    cin >> abc[i];
  }
  
  cin >> h >> p >> t;
  
  int m = t.size(), n = p.size();
  
  p = p + p;
  reverse(t.begin(), t.end());
  
  for (int i = 0; i < 3; i++) {
    vector<ll> a, b;
    
    for (auto c: p) {
      a.push_back(c == lavos[i]);
    }
    
    for (auto c: t) {
      b.push_back(c == omnislash[i]);
    }
    
    vector<ll> res = multiply(a, b);
    
    for (int j = m - 1; j < n + m - 1; j++) {
      total[j - m + 1] += res[j] * abc[i];
    } 
  }
  
  for (int i = 0; i < n; i++) {
    if (total[i] >= h) {
      wins++;
    }
  }
  
  int g = __gcd(n, wins);
    
  cout << wins / g << " " << n / g << "\n";
  
  return 0;
}
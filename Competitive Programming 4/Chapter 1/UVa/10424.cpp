# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
# define MOD 1000000007
# define INF 0x3f3f3f3f
# define INFLL 0x3f3f3f3f3f3f3f3f
# define EPS 1e-9
# define PI 3.141592653589793238462643383279502884
# define pb push_back
# define pf push_front
# define fi first
# define se second
# define mp make_pair
# define sz(x) int(x.size())
# define all(x) x.begin(), x.end()
# define mset(x, y) memset(&x, (y), sizeof(x))

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> ii;

const int N = 1e1 + 10;

string s1, s2;

int get_digit (string s) {
    int cur, sum = 0;
    
    for (char c: s) {
        if ('a' <= c && c <= 'z') sum += (c - 'a') + 1;
        else if ('A' <= c && c <= 'Z') sum += (c - 'A') + 1;
    }
    
    while (to_string(sum).size() > 1) {
        cur = 0;
        for (char c: to_string(sum)) cur += c - '0';
        sum = cur;
    }
    
    return sum;
}

int main () {_
    while (getline(cin, s1)) {
        getline(cin, s2);
        int d1 = get_digit(s1), d2 = get_digit(s2);
        cout << fixed << setprecision(2) << 100.0 * min(d1, d2) / max(d1, d2) << " %\n";
    }
}
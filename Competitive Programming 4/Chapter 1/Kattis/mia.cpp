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

const int N = 2e1 + 10;

int r0, r1, s0, s1;

int winner (string p1, string p2) {
    // Regra 1
    if (p1 == "21") return 1;
    if (p2 == "21") return 2;
    // Regra 2
    if (p1[0] == p1[1] && p2[0] == p2[1]) return (p1[0] > p2[0] ? 1 : 2);
    if (p1[0] == p1[1]) return 1;
    if (p2[0] == p2[1]) return 2;
    // Regra 3
    return (stoi(p1) > stoi(p2) ? 1 : 2);
}

int main () {_
    while (cin >> s0 >> s1 >> r0 >> r1 && (s0 || s1 || r0 || r1)) {
        if (s0 > s1) swap(s0, s1);
        if (r0 > r1) swap(r0, r1);
        if (s0 == r0 && s1 == r1) cout << "Tie.\n";
        else cout << "Player " << winner(to_string(s1) + to_string(s0), to_string(r1) + to_string(r0)) << " wins.\n";
    }
}
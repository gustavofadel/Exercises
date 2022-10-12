# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

bool ok = true;
int n[8];

int main () {_
    for (int i = 0; i < 8; i++) {
        cin >> n[i];
        ok &= (n[i] != 9);
    }
    
    cout << "FS"[ok] << "\n";
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const double EPS = 1e-5;
const int MAX = 1e5 + 1;

double a, c[MAX], sum;
int n;

double search (double low, double high) {
    double mid = (low + high) / 2.0, red_area = 0.0;
    
    for (int i = 0; i < n; i++) {
        if (c[i] > mid) {
            red_area += (c[i] - mid);
        }
    }
    
    if (abs(red_area - a) < EPS) {
        return mid;
    }
    
    if (red_area < a) {
        return search(low, mid);
    }
    
    else {
        return search(mid, high);
    }
}

int main () {_
    while (cin >> n >> a && (n || a)) {
        sum = 0.0;
        
        for (int i = 0; i < n; i++) cin >> c[i], sum += c[i];
        
        if (abs(sum - a) < EPS) {
            cout << ":D\n";
            continue;
        }
        
        if (sum < a) {
            cout << "-.-\n";
            continue;
        }
        
        cout << fixed << setprecision(4) << search(0.0, sum) << "\n";
    }
    
    return 0;
}
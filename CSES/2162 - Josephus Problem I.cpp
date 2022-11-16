# include <bits/stdc++.h>
# include <ext/pb_ds/assoc_container.hpp>
# include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
# define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

int n, pos;
ordered_set st;

int main () {_
    cin >> n;
    
    for (int i = 1; i <= n; i++) st.insert(i);
    
    while (st.size() > 1) {
        pos = (pos + 1) % st.size();
        cout << *(st.find_by_order(pos)) << " ";
        st.erase(*(st.find_by_order(pos)));
        pos %= st.size();
    }
    
    cout << *(st.find_by_order(0)) << "\n";
}
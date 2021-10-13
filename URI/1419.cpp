# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAXR = 20;

int l[MAXR], m[MAXR], r;

int main () {_
  while (cin >> r && r) {
    int cur_l = 0, cur_m = 0, fst_l = -1, fst_m = -1, lst_l = -1, lst_m = -1, pts_l = 0, pts_m = 0;
    
    for (int i = 0; i < r; i++) {
      cin >> m[i]; pts_m += m[i];
      cur_m = (m[i] == lst_m ? cur_m + 1 : 1); lst_m = m[i];
      if (cur_m == 3 && !~fst_m) fst_m = i;
    }
    
    for (int i = 0; i < r; i++) {
      cin >> l[i]; pts_l += l[i];
      cur_l = (l[i] == lst_l ? cur_l + 1 : 1); lst_l = l[i];
      if (cur_l == 3 && !~fst_l) fst_l = i;
    }
    
    if (~fst_l && (fst_l < fst_m || !~fst_m)) pts_l += 30;
    if (~fst_m && (fst_m < fst_l || !~fst_l)) pts_m += 30;
    
    cout << (pts_l >= pts_m ? pts_l > pts_m ? "L" : "T" : "M") << "\n";
  }
  
  return 0;
}
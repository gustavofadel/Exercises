# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, t;

int main () {_
  scanf("%d", &t);
  
  while (t--) {
    bool first = true;
    int cnt[231];
    
    memset(cnt, 0, sizeof(cnt));
    
    scanf("%d", &n);
    
    for (int i = 0, x; i < n; i++) {
      scanf("%d", &x); cnt[x]++;
    }
    
    for (int i = 20; i < 231; i++) {
      if (cnt[i]) {
        while (cnt[i]--) {
          if (!first) {
            printf(" ");
          }
          
          printf("%d", i); first = false;
        }
      }
    }
    
    printf("\n");
  }
  
  return 0;
}
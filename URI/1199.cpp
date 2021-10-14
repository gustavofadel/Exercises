# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

char s[20];
int x;

int main () {_
  while (scanf("%s", s) && strcmp(s, "-1")) {
    if (s[1] == 'x') { sscanf(s, "%x", &x); printf("%d\n", x); }
    else { sscanf(s, "%d", &x); printf("0x%X\n", x); }
  }
  
  return 0;
}
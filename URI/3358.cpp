# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t;
string s;

int vowel (char c) { return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'; }

int main () {_
  cin >> t;
  
  while (t--) {
    int cnt = 0, easy = 1;
    
    cin >> s;
    
    for (char c: s) {
      cnt = vowel(tolower(c)) ? 0 : cnt + 1;
      easy &= cnt < 3;
    }
    
    cout << s << (easy ? " eh " : " nao eh ") << "facil\n";
  }
  
  return 0;
}
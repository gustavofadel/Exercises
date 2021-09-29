# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int l, n;
map<string, string> mp;
string s1, s2;
vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
vector<string> vet{"o", "s", "ch", "sh", "x"};

bool is_vowel (char ch) {
  return find(vowels.begin(), vowels.end(), ch) != vowels.end();
}

int main () {_
  cin >> l >> n;
  
  while (l--) {
    cin >> s1 >> s2; mp[s1] = s2;
  }
  
  while (n--) {
    cin >> s1;
    
    int tam = s1.size();
    
    if (mp.count(s1)) cout << mp[s1] << "\n";
    
    else if (s1[tam - 1] == 'y' && !is_vowel(s1[tam - 2])) {
      s1.pop_back(); cout << s1 + "ies" << "\n";
    }
    
    else {
      bool flag = false;
      
      for (string s: vet) {
        if (equal(s.rbegin(), s.rend(), s1.rbegin())) {
          flag = true; cout << s1 + "es" << "\n"; break;
        }
      }
      
      if (!flag) cout << s1 + "s" << "\n";
    }
  }
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;
string s;

string getPalindrome () {
  char oddChar;
  int oddCount = 0;
  unordered_map<char, int> count;
  
  for (int i = 0; i < n; i++) {
    count[s[i]]++;
  }
  
  for (char c = 'A'; c <= 'Z'; c++) {
    if (count[c] % 2 == 1) {
      oddCount++;
      oddChar = c;
    }
  }
  
  if (oddCount > 1 || (oddCount == 1 && n % 2 == 0)) {
    return "NO SOLUTION";
  }
  
  string firstHalf = "", secondHalf = "";
  
  for (char c = 'A'; c <= 'Z'; c++) {
    string auxiliary(count[c] / 2, c);
    firstHalf = firstHalf + auxiliary;
    secondHalf = auxiliary + secondHalf;
  }
  
  return (oddCount == 1) ? (firstHalf + oddChar + secondHalf) : (firstHalf + secondHalf);
}

int main () {_
  cin >> s;
  
  n = s.size();
  
  cout << getPalindrome() << "\n";

  return 0;
}
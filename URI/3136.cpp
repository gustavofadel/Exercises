# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n, x, y;
map<int, int> mp;
stack<int> st;
string s;

int main () {_
  cin >> n;
  
  while (n--) {
    cin >> s;
    
    if (s == "add" && st.size() >= 2) {
      x = st.top(); st.pop(); y = st.top(); st.pop(); st.push(y + x);
    }
    
    else if (s == "mul" && st.size() >= 2) {
      x = st.top(); st.pop(); y = st.top(); st.pop(); st.push(y * x);
    }
    
    else if (s == "div" && st.size() >= 2) {
      x = st.top(); st.pop(); y = st.top(); st.pop(); st.push(y / x);
    }
    
    else if (s == "sub" && st.size() >= 2) {
      x = st.top(); st.pop(); y = st.top(); st.pop(); st.push(y - x);
    }
    
    else if (s == "print" && !st.empty()) {
      cout << st.top() << "\n"; st.pop();
    }
    
    else if (s.find("pop") != string::npos && !st.empty()) {
      mp[stoi(s.substr(5, s.size()))] = st.top(); st.pop();
    } 
    
    else {
      if (s[5] == 'R' && mp.count(stoi(s.substr(6, s.size())))) {
        st.push(mp[stoi(s.substr(6, s.size()))]);
      }
      
      else {
        st.push(stoi(s.substr(5, s.size())));
      }
    }
  }
  
  return 0;
}
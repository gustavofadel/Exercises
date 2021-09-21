# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct Date {
  int day, month, year;
};

int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int leapYears (Date d) {
  int years = d.year;
  
  if (d.month <= 2) {
    years--;
  }
  
  return years / 4 - years / 100 + years / 400;
}

int countDays (Date d) {
  int cnt = d.year * 365 + d.day;
  
  for (int i = 0; i < d.month - 1; i++) {
    cnt += monthDays[i];
  }
  
  return cnt + leapYears(d);
}

int t;
string s1, s2;

int main () {_
  cin >> t;
  
  while (t--) {
    cin >> s1 >> s2;
    
    Date d1 = {stoi(s1.substr(8, 2)), stoi(s1.substr(5, 2)), stoi(s1.substr(0, 4))};
    Date d2 = {stoi(s2.substr(8, 2)), stoi(s2.substr(5, 2)), stoi(s2.substr(0, 4))};
    
    cout << abs(countDays(d2) - countDays(d1)) << "\n";
  }
  
  return 0;
}
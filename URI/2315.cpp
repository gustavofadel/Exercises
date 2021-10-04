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

int day1, day2, month1, month2;

int main () {_
  cin >> day1 >> month1 >> day2 >> month2;
  
  Date date1 = {day1, month1, 1};
  Date date2 = {day2, month2, 1};
  
  cout << countDays(date2) - countDays(date1) << "\n";
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct Team {
  float average;
  int id, points, received, scored;
};

int n, tc = 1;

bool cmp (Team t1, Team t2) {
  if (t1.points != t2.points) {
    return t1.points > t2.points;
  }
  
  if (t1.average != t2.average) {
    return t1.average > t2.average;
  }
  
  if (t1.scored != t2.scored) {
    return t1.scored > t2.scored;
  }
  
  return t1.id < t2.id;
}

int main () {_
  while (cin >> n && n) {
    if (tc > 1) {
      cout << "\n";
    }
    
    Team teams[n];
    
    for (int i = 0; i < n; i++) {
      teams[i].id = i + 1; teams[i].points = teams[i].received = teams[i].scored = 0;
    }
    
    for (int i = 0, x, y, z, w; i < n * (n - 1) / 2; i++) {
      cin >> x >> y >> z >> w; x--; z--;
      teams[x].scored += y; teams[x].received += w;
      teams[z].scored += w; teams[z].received += y;
      (y > w ? teams[x] : teams[z]).points += 2; (y < w ? teams[x] : teams[z]).points += 1;
    }
    
    for (int i = 0; i < n; i++) {
      teams[i].average = (teams[i].received ? (float) teams[i].scored / teams[i].received : teams[i].scored);
    }
    
    sort(teams, teams + n, cmp);
    
    cout << "Instancia " << tc++ << "\n";
    
    for (int i = 0; i < n; i++) {
      cout << teams[i].id << " \n"[i == n - 1];
    }
  }
  
  return 0;
}
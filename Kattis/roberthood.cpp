# include <bits/stdc++.h>

using namespace std;

struct Point {
  int x, y;
};

bool compare (Point a, Point b) {
  return a.x < b.x || (a.x == b.x && a.y < b.y);
}

bool clockwise (Point a, Point b, Point c) {
  return a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y) < 0;
}

bool counterClockwise (Point a, Point b, Point c) {
  return a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y) > 0;
}

void convexHull (vector<Point>& a) {
  if (a.size() == 1) {
    return;
  }
  
  sort(a.begin(), a.end(), &compare);
  
  Point p1 = a[0], p2 = a.back();
  vector<Point> up, down;
  
  up.push_back(p1);
  down.push_back(p1);
  
  for (int i = 1; i < a.size(); i++) {
    if (i == a.size() - 1 || clockwise(p1, a[i], p2)) {
      while (up.size() >= 2 && !clockwise(up[up.size() - 2], up[up.size() - 1], a[i])) {
        up.pop_back();
      }
      
      up.push_back(a[i]);
    }
    
    if (i == a.size() - 1 || counterClockwise(p1, a[i], p2)) {
      while (down.size() >= 2 && !counterClockwise(down[down.size() - 2], down[down.size() - 1], a[i])) {
        down.pop_back();
      }
      
      down.push_back(a[i]);
    }
  }
  
  a.clear();
  
  for (int i = 0; i < up.size(); i++) {
    a.push_back(up[i]);
  }
  
  for (int i = down.size() - 2; i > 0; i--) {
    a.push_back(down[i]);
  }
}

double distance (int x1, int y1, int x2, int y2) {
  return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  double longest = 0.0;
  int c;
  
  cin >> c;
  
  vector<Point> points(c);
  
  for (int i = 0; i < c; i++) {
    cin >> points[i].x >> points[i].y;
  }
  
  convexHull(points);
  
  for (int i = 0; i < points.size(); i++) {
    for (int j = i + 1; j < points.size(); j++) {
      longest = max(longest, distance(points[i].x, points[i].y, points[j].x, points[j].y));
    }
  }
  
  cout << fixed << setprecision(8) << longest << "\n";

  return 0;  
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const double EPS = 1e-9;

struct Point {
  double x, y;
  
  Point (double x = 0, double y = 0) : x(x), y(y) {}
  
  Point operator + (Point p) const { return Point(x + p.x, y + p.y); }
  Point operator - (Point p) const { return Point(x - p.x, y - p.y); }
  Point operator * (double k) const { return Point(x * k, y * k); }
};

double dist (Point a, Point b) { return hypot(a.x - b.x, a.y - b.y); }
double cross (Point a, Point b) { return a.x * b.y - a.y * b.x; }

struct Circle {
  Point c;
  double r;
  
  Circle (Point c = Point(), double r = 0) : c(c), r(r) {}
  
  bool contains (Point p) { return dist(c, p) <= r + EPS; }
};

Circle circumcicle (Point p, Point q, Point r) {
  Point a = Point((q - p).y, -(q - p).x), b = Point((r - p).y, -(r - p).x), c = (r - q) * 0.5;
  double k = cross(a, c) / cross(b, a);
  Circle res; res.c = ((p + r) * 0.5) + (b * k); res.r = dist(res.c, p);
  return res;
}

Circle minimum_circle (vector<Point> vet) {
  random_shuffle(vet.begin(), vet.end());
  
  Circle c = Circle(vet[0], 0);
  
  for (int i = 0; i < vet.size(); i++) {
    if (!c.contains(vet[i])) {
      c = Circle(vet[i], 0.0);
    
      for (int j = 0; j < i; j++) {
        if (!c.contains(vet[j])) {
          c = Circle((vet[i] + vet[j]) * 0.5, 0.5 * dist(vet[i], vet[j]));
        
          for (int k = 0; k < j; k++) {
            if (!c.contains(vet[k])) {
              c = circumcicle(vet[j], vet[i], vet[k]);
            }
          }
        }
      }
    } 
  }
  
  return c;
}

int main () {_
  int n;
  
  cin >> n;
  
  vector<Point> vet(n);
  
  for (int i = 0; i < n; i++) cin >> vet[i].x >> vet[i].y;
  
  Circle c = minimum_circle(vet);
  
  cout << fixed << setprecision(2) << c.c.x << " " << c.c.y << " " << c.r << " " << 25.12 * c.r << "\n";
  
  return 0;
}
# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a, b, c;

int main () {_
  cout << fixed << setprecision(4);

  while (cin >> a >> b >> c) {
    double perimeter = a + b + c, semiperimeter = perimeter / 2.0;
    double triangle_area = sqrt(semiperimeter * (semiperimeter - a) * (semiperimeter - b) * (semiperimeter - c));
    double red_radius = 2 * triangle_area / perimeter, red_area = M_PI * red_radius * red_radius;
    double blue_area = triangle_area - red_area;
    double yellow_radius = a * b * c / (4 * triangle_area);
    double yellow_area = M_PI * yellow_radius * yellow_radius - triangle_area;
    cout << yellow_area << " " << blue_area << " " << red_area << "\n";
  }
  
  return 0;
}
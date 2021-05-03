# coding: utf-8

(xa, ya), (xb, yb), (xc, yc) = [tuple(map(int, input().split())) for i in range(3)]
d1 = (xa - xb) * (xa - xb) + (ya - yb) * (ya - yb)
d2 = (xa - xc) * (xa - xc) + (ya - yc) * (ya - yc)
d3 = (xb - xc) * (xb - xc) + (yb - yc) * (yb - yc)

if d1 == d2:
  x, y = xb + xc - xa, yb + yc - ya
  
elif d1 == d3:
  x, y = xa + xc - xb, ya + yc - yb
  
else:
  x, y = xa + xb - xc, ya + yb - yc
  
print(x, y)
# coding: utf-8

n1 = int(input())
n2 = int(input())
d1 = (n2 - n1) % 360
d2 = (n1 - n2) % 360

print(d1) if d1 <= d2 else print(-d2)
# coding: utf-8

from math import pi

m, n, r = map(float, input().split())
ax, ay, bx, by = map(int, input().split())

print(min(ay * r / n + by * r / n, pi * (r / n * min(ay, by)) * (abs(ax - bx) / m) + r / n * abs(ay - by)))
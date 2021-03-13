# coding: utf-8

from math import sqrt

a, b, c, d = map(int, input().split())
s = (a + b + c + d) / 2
area = sqrt((s - a) * (s - b) * (s - c) * (s - d))

print(area)
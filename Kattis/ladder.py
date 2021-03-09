# coding: utf-8

from math import ceil, radians, sin

h, v = map(int, input().split())
length = ceil(h / sin(radians(v)))

print(length)
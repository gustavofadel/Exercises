# coding: utf-8

from math import cos, pi

h, v = map(int, input().split())

print('safe') if v <= 180 else print(int(h / cos(pi * (v / 180 + 0.5))))
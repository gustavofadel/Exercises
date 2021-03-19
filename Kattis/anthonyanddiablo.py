# coding: utf-8

from math import pi, sqrt

a, n = map(float, input().split())

print('Diablo is happy!') if (n * n) / (4 * pi) >= a else print('Need more materials!')
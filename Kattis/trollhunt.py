# coding: utf-8

from math import ceil

b, k, g = map(int, input().split())
groups = k // g
days = ceil((b - 1) / groups)

print(days)
# coding: utf-8

from math import pi

r, c = map(int, input().split())
withCheese = pi * (r - c) * (r - c)
fullPizza = pi * r * r

print('%f' % (withCheese / fullPizza * 100))
# coding: utf-8

from math import pi

r = int(input())
euclidian = pi * r * r
taxicab = 2 * r * r

print('%.6f\n%.6f' % (euclidian, taxicab))
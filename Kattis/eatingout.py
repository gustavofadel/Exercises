# coding: utf-8

m, a, b, c = map(int, input().split())

print('possible') if a + b + c <= 2 * m else print('impossible')
# coding: utf-8

n, a, p = map(int, input().split())
p /= 100

print(n + a * p - a * (1 - p))
# coding: utf-8

n, b = map(int, input().split())

print('yes') if n < 2 ** (b + 1) else print('no')
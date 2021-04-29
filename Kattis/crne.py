# coding: utf-8

n = int(input())
pieces = (n // 2 + 1) * (n // 2 + 1)
pieces += (n // 2 + 1) if n & 1 else 0

print(pieces)
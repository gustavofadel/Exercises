# coding: utf-8

a, b, c = map(int, input().split())

print(max(b - a, c - b) - 1)
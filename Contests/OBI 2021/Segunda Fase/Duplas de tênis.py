# coding: utf-8

a, b, c, d = sorted([int(input()) for i in range(4)])

print(abs((a + d) - (b + c)))
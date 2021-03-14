# coding: utf-8

n, p, q = map(int, input().split())

print('paul') if ((p + q) // n) % 2 == 0 else print('opponent')
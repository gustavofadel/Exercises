# coding: utf-8

n, f = map(int, input().split())

print('%.2f%%' % ((n - f) / n * 100))
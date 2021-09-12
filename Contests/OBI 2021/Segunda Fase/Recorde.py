# coding: utf-8

r, m, l = [int(input()) for i in range(3)]
print('RM' if r < m else '*')
print('RO' if r < l else '*')
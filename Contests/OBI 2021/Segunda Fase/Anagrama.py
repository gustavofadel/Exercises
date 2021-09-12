# coding: utf-8

n = int(input())
a = sorted(input().replace(' ', '').replace(',', '').replace('.', ''))
b = sorted(input().replace(' ', '').replace(',', '').replace('.', ''))

print('S' if a == b else 'N')
# coding: utf-8

a, b = map(int, input().split())
c, d = map(int, input().split())
t = int(input())
distance = abs(a - c) + abs(b - d)

print('Y') if t - distance >= 0 and (t - distance) % 2 == 0 else print('N')
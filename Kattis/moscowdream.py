# coding: utf-8

a, b, c, n = map(int, input().split())

print('YES') if a > 0 and b > 0 and c > 0 and a + b + c >= n and n >= 3 else print('NO')
# coding: utf-8

n = int(input())
a = [(i, int(input())) for i in range(n)]
best = sorted(a, key = lambda x: x[1] + a[(n + x[0] - 2) % n][1])[0][0]

print(a[best][1] + a[(n + best - 2) % n][1])
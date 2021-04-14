# coding: utf-8

n, k = map(int, input().split())

print(n - 1) if n <= 2 * k else print(k + (n - 1) % k + 1)
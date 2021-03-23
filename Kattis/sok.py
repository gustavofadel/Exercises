# coding: utf-8

a, b, c = map(int, input().split())
i, j, k = map(int, input().split())
amount = min(a / i, b / j, c / k)

print(a - i * amount, b - j * amount, c - k * amount)
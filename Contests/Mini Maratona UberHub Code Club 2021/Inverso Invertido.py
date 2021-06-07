# coding: utf-8

n = int(input())
a = list(map(int, input().split()))

print(*a[::-1])
print(*a)
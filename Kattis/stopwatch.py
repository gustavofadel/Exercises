# coding: utf-8

n = int(input())
t = [int(input()) for i in range(n)]

print('still running') if n & 1 else print(sum(t[i + 1] - t[i] for i in range(0, n, 2)))
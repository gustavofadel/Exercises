# coding: utf-8

n = int(input())
numbers = [int(input()) for i in range(n)]

print(*numbers[::-1], sep = '\n')
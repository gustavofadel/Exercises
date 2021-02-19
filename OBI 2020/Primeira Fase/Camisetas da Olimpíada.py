# coding: utf-8

n = int(input())
t = list(map(int, input().split()))
p = int(input())
m = int(input())

print('S') if t.count(1) <= p and t.count(2) <= m else print('N')
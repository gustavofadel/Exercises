# coding: utf-8

n = int(input())
s = list(map(int, input().split()))
a = sorted([(v, i + 1) for i, v in enumerate(s)], reverse = True)
total = sum([v for v, i in a[1:]])

print(' '.join([str(i) for v, i in a])) if a[0][0] <= total else print('impossible')
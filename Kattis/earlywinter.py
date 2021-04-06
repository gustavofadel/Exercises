# coding: utf-8

n, dm = map(int, input().split())
d = list(map(int, input().split()))

for i in range(n):
  if d[i] <= dm:
    print("It hadn't snowed this early in", i, 'years!')
    exit()
    
print('It had never snowed this early!')
# coding: utf-8

t, d, m = map(int, input().split())
y = [0] + [int(input()) for i in range(m)] + [d]

for i in range(1, m + 2):
  if y[i] - y[i - 1] >= t:
    print('Y')
    exit()
    
print('N')
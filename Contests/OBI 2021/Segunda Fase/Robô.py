# coding: utf-8

n, c, s = map(int, input().split())
x = list(map(int, input().split()))
cnt, cur = 0, 1

for i in range(c):
  cnt += int(cur == s)
  cur += x[i]
  
  if cur < 1:
    cur = n
    
  if cur > n:
    cur = 1
  
print(cnt + int(cur == s))
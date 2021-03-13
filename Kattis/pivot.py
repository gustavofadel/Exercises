# coding: utf-8

n = int(input())
a = list(map(int, input().split()))
currentMaximum = a[0]
currentMinimum = a[-1]
leftMaximum = [0 for i in range(n)]
rightMinimum = [0 for i in range(n)]

for i in range(n):
  currentMaximum = max(currentMaximum, a[i])
  currentMinimum = min(currentMinimum, a[n - i - 1])
  leftMaximum[i] = currentMaximum
  rightMinimum[n - i - 1] = currentMinimum
  
count = 0

for i in range(n):
  if leftMaximum[i] <= a[i] <= rightMinimum[i]:
    count += 1
    
print(count)
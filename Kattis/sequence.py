# coding: utf-8

n = int(input())
a = [1]

while a[-1] < n:
  a.append(2 * a[-1])
  
while a[-1] > n:
  a.pop()
  
print(len(a))
print(*a)
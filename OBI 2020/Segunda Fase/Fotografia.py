# coding: utf-8

a, l = sorted(map(int, input().split()))
n = int(input())
area, melhor, menor = a * l, -1, 200 * 200

for i in range(1, n + 1):
  x, y = sorted(map(int, input().split()))
  
  if x >= a and y >= l:
    if x * y - area < menor:
      melhor, menor = i, x * y - area
      
print(melhor)
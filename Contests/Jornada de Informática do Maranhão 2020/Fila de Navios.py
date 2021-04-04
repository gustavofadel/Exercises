# coding: utf-8

n = int(input())
ships = list()
total = 0

for i in range(n):
  profit, loss = map(int, input().split())
  ships.append((profit, loss))
  total += loss
  
answer = -10 ** 9 - 10

for i in range(n):
  for j in range(i + 1, n):
    for k in range(j + 1, n):
      answer = max(answer, ships[i][0] + ships[j][0] + ships[k][0] + total - ships[i][1] - ships[j][1] - ships[k][1])
      
print(answer)
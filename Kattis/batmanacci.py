# coding: utf-8

n, k = map(int, input().split())
fibonacci = [0, 1, 1]

for i in range(n + 1):
  fibonacci.append(fibonacci[-1] + fibonacci[-2])
  
while n > 2:
  if k > fibonacci[n - 2]:
    k -= fibonacci[n - 2]
    n -= 1
    
  else:
    n -= 2
    
print(['N', 'A'][int(n == 2)])
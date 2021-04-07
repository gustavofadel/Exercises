# coding: utf-8

modulo = 10 ** 9 + 7
n, t = map(int, input().split())
a, b, c, t0 = map(int, input().split())
elapsed = penalty = solved = 0
problems = [t0]

for i in range(1, n):
  problems.append((((a * problems[i - 1]) + b) % c) + 1)
  
problems.sort()

for i in range(n):
  if elapsed + problems[i] <= t:
    penalty = (penalty + problems[i] + elapsed) % modulo
    elapsed += problems[i]
    solved += 1
    
  else:
    break
  
print(solved, penalty)
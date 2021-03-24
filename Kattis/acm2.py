# coding: utf-8

n, p = map(int, input().split())
estimated = list(map(int, input().split()))
elapsed = penalty = solved = 0

current = estimated.pop(p)

if current > 300:
  print(0, 0)
  exit(0)
  
elapsed += current
penalty += elapsed
solved += 1

estimated.sort()

while len(estimated) > 0:
  current = estimated.pop(0)
  
  if elapsed + current <= 300:
    elapsed += current
    penalty += elapsed
    solved += 1
    
  else:
    break
  
print(solved, penalty)
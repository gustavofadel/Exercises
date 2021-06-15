# coding: utf-8

def check (x):
  total = 0
  
  for p, w, d in friends:
    if abs(p - x) <= d:
      continue
    
    if p < x:
      total += ((x - d) - p) * w
      
    else:
      total += (p - (x + d)) * w
      
  return total

n = int(input())
friends = [list(map(int, input().split())) for i in range(n)]
left, right = 0, int(1e9)

while left < right - 1:
  mid = (left + right) // 2
  
  if check(mid) >= check(mid + 1):
    left = mid
    
  else:
    right = mid
    
print(min(check(left), check(right)))
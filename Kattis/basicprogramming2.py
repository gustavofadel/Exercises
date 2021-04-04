# coding: utf-8

from collections import Counter

n, t = map(int, input().split())
a = list(map(int, input().split()))

if t == 1:
  found = False
  hashSet = set(a)
  
  for i in range(1, 7777):
    if i in hashSet and 7777 - i in hashSet:
      found = True
      break
    
  print('Yes') if found else print('No')
  
elif t == 2:
  print('Unique') if len(set(a)) == n else print('Contains duplicate')
  
elif t == 3:
  value, frequency = Counter(a).most_common(1)[0]
  
  print(value) if frequency > n / 2 else print(-1)
  
elif t == 4:
  a.sort()
  
  if n % 2 == 0:
    print(a[n // 2 - 1], a[n // 2])
    
  else:
    print(a[n // 2])
    
else:
  print(*sorted([x for x in a if 99 < x < 1000]), sep = ' ')
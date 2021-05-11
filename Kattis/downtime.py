# coding: utf-8

from collections import deque
from math import ceil

n, k = map(int, input().split())
requests = deque()
size = 0

for i in range(n):
  t = int(input())
  
  while requests and requests[0] <= t - 1000:
    requests.popleft()
    
  requests.append(t)
  size = max(size, len(requests))

print(ceil(size / k))
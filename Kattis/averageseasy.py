# coding: utf-8

for ct in range(int(input())):
  input()
  
  ncs, ne = map(int, input().split())
  cs = list(map(int, input().split()))
  e = list(map(int, input().split()))
  csAverage = sum(cs) / ncs
  eAverage = sum(e) / ne
  count = 0
  
  for i in range(ncs):
    csCopy = cs.copy()
    eCopy = e.copy()
    eCopy.append(csCopy.pop(i))
    newCsAverage = sum(csCopy) / len(csCopy)
    newEAverage = sum(eCopy) / len(eCopy)
    
    if newCsAverage > csAverage and newEAverage > eAverage:
      count += 1
      
  print(count)
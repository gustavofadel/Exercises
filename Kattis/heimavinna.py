# coding: utf-8

problemsList = input().split(';')
problemsCount = 0

for i in range(len(problemsList)):
  problemsRange = list(map(int, problemsList[i].split('-')))
  
  if len(problemsRange) == 1:
    problemsCount += 1
    
  else:
    problemsCount += problemsRange[1] - problemsRange[0] + 1
    
print(problemsCount)
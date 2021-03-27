# coding: utf-8

p, t = map(int, input().split())
problems = 0

for i in range(p):
  canSolve = True
  
  for j in range(t):
    testCase = input()
    
    if canSolve:
      for k in range(1, len(testCase)):
        if testCase[k].isupper():
          canSolve = False
          break
        
  if canSolve:
    problems += 1
    
print(problems)
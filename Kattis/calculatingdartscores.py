# coding: utf-8

def printScore (x):
  if x == 0:
    print()
    
  elif x % 3 == 0:
    print('triple', x // 3)
    
  elif x % 2 == 0:
    print('double', x // 2)
    
  else:
    print('single', x)

n = int(input())

for a in range(1, 4):
  for b in range(4):
    for c in range(4):
      for i in range(1, 21):
        for j in range(1, 21):
          for k in range(1, 21):
            if a * i + b * j + c * k == n:
              printScore(a * i)
              printScore(b * j)
              printScore(c * k)
              exit()
              
print('impossible')
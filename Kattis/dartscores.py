# coding: utf-8

circles = [400, 1600, 3600, 6400, 10000, 14400, 19600, 25600, 32400, 40000]

def calculateScore (x, y):
  squareRadius = x * x + y * y
  
  for i in range(10):
    if squareRadius <= circles[i]:
      return 10 - i
      
  return 0
  
for ct in range(int(input())):
  n = int(input())
  totalScore = 0
  
  for i in range(n):
    x, y = map(int, input().split())
    totalScore += calculateScore(x, y)
    
  print(totalScore)
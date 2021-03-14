# coding: utf-8

def calculateScore (scoresList):
  total = 0
  
  for i in range(len(scoresList)):
    total += scoresList[i] * (4 / 5) ** i
    
  return total / 5

n = int(input())
scores = [int(input()) for i in range(n)]
currentScore = calculateScore(scores)
newScores = 0

for i in range(n):
  newScores += calculateScore(scores[:i] + scores[i + 1:])
  
print(currentScore)
print(newScores / n)
# coding: utf-8

n, code, guess = input().split()
remainingCode = list()
remainingGuess = list()
r = s = 0

for i in range(int(n)):
  if code[i] == guess[i]:
    r += 1
    
  else:
    remainingCode.append(code[i])
    remainingGuess.append(guess[i])
    
while remainingCode:
  if remainingCode[0] in remainingGuess:
    remainingGuess.remove(remainingCode[0])
    s += 1
    
  remainingCode.pop(0)
  
print(r, s)
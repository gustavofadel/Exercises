# coding: utf-8

n = int(input())
cards = list(map(int, input().split()))
stack = list()

for i in range(n):
  if len(stack) > 0 and (stack[-1] + cards[i]) % 2 == 0:
    stack.pop()
    
  else:
    stack.append(cards[i])

print(len(stack))
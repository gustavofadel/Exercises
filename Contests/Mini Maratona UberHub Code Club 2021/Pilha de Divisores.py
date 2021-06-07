# coding: utf-8

from collections import deque

n = int(input())
deck = deque(list(map(int, input().split())))
discard = deque([deck.popleft()])
count = 0

while deck and deck[0] % discard[-1] == 0:
  count += 1
  discard.append(deck.popleft())
  
print(count)
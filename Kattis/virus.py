# coding: utf-8

before = input()
after = input()
front = back = 0

while front < min(len(before), len(after)) and before[front] == after[front]:
  front += 1
  
while back < min(len(before), len(after)) and before[len(before) - back - 1] == after[len(after) - back - 1]:
  back += 1
  
count = len(after) - (front + back)

print(count) if count > 0 else print(max(0, len(after) - len(before)))
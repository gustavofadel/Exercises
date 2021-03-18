# coding: utf-8

while True:
  try:
    integers = list(map(int, input().split()))
    
    print(sum(integers) // 2)
    
  except EOFError:
    break
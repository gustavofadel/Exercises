# coding: utf-8

while True:
  try:
    a, b, c = map(int, input().split())
    answer = '0.'
    
    for i in range(c):
      a *= 10
      answer += str(a // b)
      a -= (a // b * b)
      
    print(answer)
    
  except EOFError:
    break
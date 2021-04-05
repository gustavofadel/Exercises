# coding: utf-8

answer = [True for i in range(11)]

while True:
  n = int(input())
  
  if n == 0:
    break
  
  response = input().split()
  
  if response[1] == 'low':
    for i in range(n + 1):
      answer[i] = False
      
  elif response[1] == 'high':
    for i in range(n, 11):
      answer[i] = False
      
  else:
    print('Stan may be honest') if answer[n] else print('Stan is dishonest')
    answer = [True for i in range(11)]
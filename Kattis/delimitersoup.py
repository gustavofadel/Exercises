# coding: utf-8

l = int(input())
s = input()
stack = list()
ok = True

for i in range(l):
  if s[i] == '{' or s[i] == '[' or s[i] == '(':
    stack.append(s[i])
    
  elif s[i] == '}':
    if len(stack) == 0 or stack[-1] != '{':
      print(s[i], i)
      ok = False
      break
    
    else:
      stack.pop()
      
  elif s[i] == ']':
    if len(stack) == 0 or stack[-1] != '[':
      print(s[i], i)
      ok = False
      break
    
    else:
      stack.pop()
      
  elif s[i] == ')':
    if len(stack) == 0 or stack[-1] != '(':
      print(s[i], i)
      ok = False
      break
    
    else:
      stack.pop()
      
if ok:
  print('ok so far')
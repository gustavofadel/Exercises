# coding: utf-8

raggedness = 0
lines = list()
m = 0

while True:
  try:
    line = input()
    lines.append(line)
    m = max(m, len(line))
    
  except EOFError:
    break
  
for i in range(len(lines) - 1):
  raggedness += (len(lines[i]) - m) ** 2
  
print(raggedness)
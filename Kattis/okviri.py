# coding: utf-8

s = input()
lines = ['.', '.', '#', '.', '.']

for i in range(len(s)):
  if (i + 1) % 3 == 0 and i != 0:
    lines[0] += '.*..'
    lines[1] += '*.*.'
    lines[2] += '*.' + s[i] + '.*'
    lines[3] += '*.*.'
    lines[4] += '.*..'
    
  else:
    lines[0] += '.#..'
    lines[1] += '#.#.'
    
    if (i + 2) % 3 == 0 and i < len(s) - 1:
      lines[2] += '.' + s[i] + '.'
    
    else:
      lines[2] += '.' + s[i] + '.#'
      
    lines[3] += '#.#.'
    lines[4] += '.#..'
    
print('\n'.join(lines))
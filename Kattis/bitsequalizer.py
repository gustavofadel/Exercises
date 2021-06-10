# coding: utf-8

for case in range(1, int(input()) + 1):
  s, t = [input() for i in range(2)]
  answer = -1
  
  if len(s) == len(t) and s.count('1') <= t.count('1'):
    d = {
      '0': 0,
      '1': 0,
      '?': 0
    }
    
    for i in range(len(s)):
      if s[i] != t[i]:
        d[s[i]] += 1
        
    if d['0'] >= d['1']:
      d['0'] -= d['1']
      
    else:
      d['1'] -= d['0']
      
    answer = sum(d.values())
    
  print('Case %d:' % case, answer)
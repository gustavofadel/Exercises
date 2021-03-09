# coding: utf-8

def lcs (str1, str2, tam1, tam2):
  dp = [[None] * (tam2 + 1) for i in range(tam1 + 1)] 
  
  for i in range(tam1 + 1):
    for j in range(tam2 + 1):
      if i == 0 or j == 0:
        dp[i][j] = 0
        
      elif str1[i-1] == str2[j-1]:
        dp[i][j] = dp[i-1][j-1] + 1
        
      else:
        dp[i][j] = max(dp[i-1][j], dp[i][j-1])
        
  return dp[tam1][tam2]

dicio = dict()
dicio['a'] = 'AA'
dicio['b'] = 'BB'
dicio['c'] = 'CC'
dicio['d'] = 'DD'
dicio['e'] = 'EE'
dicio['f'] = 'FF'
dicio['g'] = 'GG'
dicio['h'] = 'HH'
dicio['i'] = 'II'
dicio['j'] = 'JJ'
dicio['k'] = 'KK'
dicio['l'] = 'LL'
dicio['m'] = 'MM'
dicio['n'] = 'NN'
dicio['o'] = 'OO'
dicio['p'] = 'PP'
dicio['q'] = 'QQ'
dicio['r'] = 'RR'
dicio['s'] = 'SS'
dicio['t'] = 'TT'
dicio['u'] = 'UU'
dicio['v'] = 'VV'
dicio['w'] = 'WW'
dicio['x'] = 'XX'
dicio['y'] = 'YY'
dicio['z'] = 'ZZ'

cadeia1 = input()
cadeia2 = input()

for i in dicio:
  cadeia1 = cadeia1.replace(i, dicio[i])
  cadeia2 = cadeia2.replace(i, dicio[i])
  
print(lcs(cadeia1, cadeia2, len(cadeia1), len(cadeia2)))
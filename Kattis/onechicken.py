# coding: utf-8

n, m = map(int, input().split())

if n < m:
  p = m - n
  
  if p == 1:
    print('Dr. Chaz will have', p, 'piece of chicken left over!')
  
  else:
    print('Dr. Chaz will have', p, 'pieces of chicken left over!')
  
else:
  p = n - m
  
  if p == 1:
    print('Dr. Chaz needs', p, 'more piece of chicken!')
    
  else:
    print('Dr. Chaz needs', p, 'more pieces of chicken!')
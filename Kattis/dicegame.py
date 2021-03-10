# coding: utf-8

gunnar = list(map(int, input().split()))
emma = list(map(int, input().split()))

if sum(gunnar) > sum(emma):
  print('Gunnar')
  
elif sum(gunnar) == sum(emma):
  print('Tie')
  
else:
  print('Emma')
# coding: utf-8

case = 1

while True:
  try:
    line = list(map(int, input().split()))
    n, sample = line[0], line[1:]
    smallest = min(sample)
    largest = max(sample)
    sampleRange = largest - smallest
    
    print('Case %d:' % case, smallest, largest, sampleRange)
    
    case += 1
    
  except EOFError:
    break
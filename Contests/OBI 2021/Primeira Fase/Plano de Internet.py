x = int(input())
n = int(input())
atual = x
for i in range(n):
  m = int(input())
  atual = x + (atual - m)
print(atual)
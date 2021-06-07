# coding: utf-8

class Dish:
  def __init__ (self, kind, ingredients, price):
    self.kind = kind
    self.ingredients = ingredients
    self.price = price

n = int(input())
dishes = dict()

for i in range(n):
  name = input()
  kind = input()
  ingredients = input().split(', ')
  price = float(input())
  dishes[name] = Dish(kind, ingredients, price)

m = int(input())
price = 0

for i in range(m):
  order = input()
  
  if order in dishes:
    print(order)
    print('Tipo:', dishes[order].kind)
    print('Ingredientes:', ', '.join(dishes[order].ingredients))
    print('Preco: R$ %.2f' % dishes[order].price)
    price += dishes[order].price
  
  else:
    print(order, 'nao esta no cardapio.')
    
  print()
  
print('Preco total: R$ %.2f.' % price)
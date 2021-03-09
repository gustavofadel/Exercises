# coding: utf-8

b, g = [int(input()) for i in range(2)]
necessarias = g // 2

print('Amelia tem todas bolinhas!') if b >= necessarias else print('Faltam', necessarias - b, 'bolinha(s)')
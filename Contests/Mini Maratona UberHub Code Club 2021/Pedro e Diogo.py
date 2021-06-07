# coding: utf-8

n = int(input())
message = input().replace(' ', '')

print('Mensagem lida' if len(message) <= n else 'Mensagem ignorada')
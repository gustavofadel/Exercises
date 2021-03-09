# coding: utf-8

kings, queens, rooks, bishops, knights, pawns = map(int, input().split())

print(1 - kings, 1 - queens, 2 - rooks, 2 - bishops, 2 - knights, 8 - pawns)
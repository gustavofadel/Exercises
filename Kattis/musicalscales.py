# coding: utf-8

increasing = ['A', 'A#', 'B', 'C', 'C#', 'D', 'D#', 'E', 'F', 'F#', 'G', 'G#']
jumps = [2, 4, 5, 7, 9, 11, 12]
major = {increasing[i]: {increasing[(i + j) % len(increasing)] for j in jumps} for i in range(len(increasing))}

n = int(input())
notes = set(input().split())
scales = ' '.join(filter(lambda x: notes.issubset(major[x]), increasing))

print(scales if len(scales) > 0 else 'none')
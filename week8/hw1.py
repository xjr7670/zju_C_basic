#-*- coding:utf-8 -*-

ss = input()
leng = [0] * 10
cnt = 0
j = 0
for i in ss:
    if i == '.':
        break
    if i != ' ':
        cnt += 1
        leng[j] += 1
    else:
        if cnt != 0:
            j += 1
        cnt = 0

print([i for i in leng if i != 0])

n = int(input())
d, ls = {}, []
for i in range(n):
    ls.append(input())
ls.reverse()
for i in ls:
    if not i in d:
        print(i)
        d[i] = 1
n = 100
#n = 3
now = input().split(',')
a = []
for i in now:
    a.append(int(i))
print(a)
# 120 bingos

bingos = []
current_sum = []

def win(a):
    cnt = 0
#    for i in range(5):
#        if a[i][i] == -1:
#            cnt += 1
#    if cnt == 5:
#        return True
#    cnt = 0
#    for i in range(5):
#        if a[i][5 - i - 1] == -1:
#            cnt += 1
#    if cnt == 5:
#        return True
    for i in range(5):
        cnt = 0
        for j in range(5):
            if a[i][j] == -1:
                cnt += 1
        if cnt == 5:
            return True
    for i in range(5):
        cnt = 0
        for j in range(5):
            if a[j][i] == -1:
                cnt += 1
        if cnt == 5:
            return True
    return False

for i in range(n):
    tmp = []
    s = input()
    for j in range(5):
        s = input()
        x = []
        for h in s.split():
            x.append(h.strip())
        print(x)
        tmp.append(x)
    cur = 0
    for j in range(len(tmp)):
        for k in range(len(tmp[j])):
            tmp[j][k] = int(tmp[j][k])
            cur += tmp[j][k]
    bingos.append(tmp)
    current_sum.append(cur)

for x in a:
    x = int(x)
    for i in range(n):
        for j in range(5):
            for k in range(5):
                print(i, j, k)
                print(bingos[i])
                if bingos[i][j][k] == x:
                    current_sum[i] -= x
                    bingos[i][j][k] = -1
                    break
        if win(bingos[i]):
            print(current_sum[i] * x)
            exit()

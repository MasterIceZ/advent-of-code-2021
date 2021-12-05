n = int(input())
print(n)
for i in range(n):
    s = input()
    l, r = s.split(" -> ")
    x1, y1 = map(int, l.split(","))
    x2, y2 = map(int, r.split(","))
    print(x1, y1, x2, y2)

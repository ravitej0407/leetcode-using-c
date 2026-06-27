a = [12,345,2,6,7896]
c = 0
d = 0
for i in a:
    while(i!=0):
        i = i/10
        d += 1
    if(d%2 == 0):
        c += 1
print(c)

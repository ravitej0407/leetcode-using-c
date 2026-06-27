b = [1,2,3,4,5]
for i in range(1,5):
    b[i] = b[i] + b[i-1]
print(b)

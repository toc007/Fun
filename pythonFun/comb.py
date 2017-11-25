import math

def nCr(n,r):
    f = math.factorial
    return f(n) / f(r) / f(n-r)

for i in range(6):
    print nCr(5, i)

sum = 0
for i in range(5):
    sum += nCr(5, i) * nCr(5-i, 5-i-1)* math.pow(2, i)
print sum


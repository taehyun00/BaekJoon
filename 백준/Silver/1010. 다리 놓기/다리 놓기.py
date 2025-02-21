t =int(input())
def fac(x):
    sums = 1
    for i in range(1,x+1):
        sums *= i
    return sums
    
    
for i in range(t):
    a,b = map(int,input().split(' '))
    count = fac(b)//(fac(a)*fac(b-a))
    print(count)
    
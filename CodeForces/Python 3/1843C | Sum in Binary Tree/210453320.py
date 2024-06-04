t = int(input())
 
for _ in range(t):
    n = int(input())
    s = 0
    while n:
        s += n
        n //= 2
    print(s, '\n')
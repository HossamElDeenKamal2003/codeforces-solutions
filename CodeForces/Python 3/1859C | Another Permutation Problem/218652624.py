def f(n, i_max):
    return [((i + 1) if i_max > i else n - i + i_max) * (i + 1) for i in range(n)]
 
 
for _ in range(int(input())):
    n = int(input())
    m = [sum(f(n, i)) - max(f(n, i)) for i in range(n)]
    print(max(m))
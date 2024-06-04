def solve(n, m, k, h):
    vec = list(map(int, input().split()))
    qu = [1, 2]
    ans = 0
    for i in range(n):
        sub = abs(h - vec[i])
        bol_1 = len(qu) and sub % k == 0
        bol_2 = len(qu) and sub <= (m - 1) * k
        bol_3 = len(qu) and sub
        if len(qu) and bol_1 and bol_2 and bol_3:
            ans += 1
    return ans
 
t = int(input())
for _ in range(t):
    n, m, k, h = map(int, input().split())
    print(solve(n, m, k, h))
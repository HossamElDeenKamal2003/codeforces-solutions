def solve():
    n, a, b = map(int, input().split())
    ans = a + b
    if (n - 1) >= ans:
        print(ans + ans + 1)
    else:
        print(n + n - 1)
 
t = int(input())
 
for i in range(t):
    solve()
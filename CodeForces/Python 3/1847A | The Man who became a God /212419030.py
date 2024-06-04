t = int(input())
while t > 0:
    n, k, sum = 0, 0, 0
    n, k = map(int, input().split())
    vec = list(map(int, input().split()))
    vec2 = [abs(vec[i] - vec[i - 1]) for i in range(1, n)]
    vec2.sort()
    for i in range(n - k):
        sum += vec2[i]
    print(sum)
    t -= 1
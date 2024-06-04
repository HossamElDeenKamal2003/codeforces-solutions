t = int(input())  # number of test cases
 
for i in range(t):
    a, b = map(int, input().split())  # read a and b for the current test case
    n = a + b  # we can start with n = a + b
    while True:
        if n % (a + b) < a:  # if n mod (a+b) is less than a, second player wins
            break
        n += a + b  # otherwise, add a+b to n and check again
    print(n)
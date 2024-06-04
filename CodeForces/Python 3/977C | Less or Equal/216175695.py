n,k=map(int,input().split())
arr=[1]+sorted(map(int,input().split()))
if k==n or arr[k+1]-arr[k]:
    print(arr[k])
else:
    print(-1)